#include <QApplication>
#include <QGraphicsItem>
#include<QGraphicsScene>
#include<QGraphicsView>

#include "Board.h"

#define sceneHeigth (boardHeight+100)
#define sceneWidth (boardWidth+100)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //create a scene
    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,sceneWidth,sceneHeigth);
    //potential leak of memory will destroyed


    //create a board
    Board * board = new Board(sceneWidth/2-boardWidth/2,sceneHeigth/2-boardHeight/2);
    scene->addItem(board);
    board->boardShowCells();

    //
    board->CellPointers[2][3]->showFigure();



    //add view
    QGraphicsView * view = new QGraphicsView(scene);
    //delete scrollbar
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(sceneWidth,sceneHeigth);
    view->show();
    return a.exec();
}
