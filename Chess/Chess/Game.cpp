#include "Game.h"
#include <QGraphicsScene>
#include <QDebug>
#include "PESHKA.h"
#include "BISHOP.h"
Game::Game()
{

}

void Game::startGame()
{
    //create a scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,sceneWidth,sceneHeigth);
    //potential leak of memory will destroyed



    //create a board
    board = new Board(sceneWidth/2-boardWidth/2,sceneHeigth/2-boardHeight/2);
    //if(board != NULL)
    //{qDebug()<<"1";}
    scene->addItem(board);
    board->setCells();
    board->showCells();
    //create figures

    for(int i=0; i< cellNums*4; i++) // anti segmentation fault
    {listFigures[i]=NULL;}

    setFigures();
    for (auto fig: listFigures)
    {
        qDebug()<<listFigures;
        if(fig==NULL){break;}
        board->scene()->addItem(fig);
    }

    //add view
    view = new QGraphicsView(scene);
    //delete scrollbar
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(sceneWidth,sceneHeigth);
    view->show();

}

void Game::setFigures()
{

    Figure* peshkaB = new Peshka(BLACK, board, placeINT {0,1});
    Figure* bishopBB = new Bishop(BLACK,board,placeINT {1,1});
    //if(peshkaB != NULL)
    //{qDebug()<<"2";}
    listFigures[0] = peshkaB;
    listFigures[1] = bishopBB;
}
