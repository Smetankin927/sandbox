#include "Game.h"
#include <QGraphicsScene>


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
    scene->addItem(board);
    board->setCells();
    board->showCells();
    //create figures
    setFigures();
    for (auto fig: listFigures)
    {
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
    int j=0;
    for(int i=0; i<cellNums; i++)
    {
        Figure* peshkaB = new Figure(PESHKA, BLACK, board, placeINT {i,1});
        Figure* peshkaW = new Figure(PESHKA, WHITE, board, placeINT {i,cellNums-2});
        listFigures[j] = peshkaB;
        j++;
        listFigures[j] = peshkaW;
        j++;
    }


        Figure* CastleB1 = new Figure(CASTLE,BLACK, board, placeINT {0,0});
        Figure* CastleB2 = new Figure(CASTLE,BLACK, board, placeINT {cellNums-1,0});
listFigures[j] = CastleB1;
j++;
listFigures[j] = CastleB2;
j++;

        Figure* CastleW1 = new Figure(CASTLE,WHITE, board, placeINT {0,cellNums-1});
        Figure* CastleW2 = new Figure(CASTLE,WHITE, board, placeINT {cellNums-1,cellNums-1});
listFigures[j] = CastleW1;
j++;
listFigures[j] = CastleW2;
j++;
        Figure* HorseB1 = new Figure(HORSE,BLACK, board, placeINT {1,0});
        Figure* HorseB2 = new Figure(HORSE,BLACK, board, placeINT {cellNums-2,0});
listFigures[j] = HorseB1;
j++;
listFigures[j] = HorseB2;
j++;
        Figure* HorseW1 = new Figure(HORSE,WHITE, board, placeINT {1,cellNums-1});
        Figure* HorseW2 = new Figure(HORSE,WHITE, board, placeINT {cellNums-2,cellNums-1});

listFigures[j] = HorseW1;
j++;
listFigures[j] = HorseW2;
j++;
        Figure* BishopB1 = new Figure(BISHOP,BLACK, board, placeINT {2,0});
        Figure* BishopB2 = new Figure(BISHOP,BLACK, board, placeINT {cellNums-3,0});
listFigures[j] = BishopB1;
j++;
listFigures[j] = BishopB2;
j++;

        Figure* BishopW1 = new Figure(BISHOP,WHITE, board, placeINT {2,cellNums-1});
        Figure* BishopW2 = new Figure(BISHOP,WHITE, board, placeINT {cellNums-3,cellNums-1});
listFigures[j] = BishopW1;
j++;
listFigures[j] = BishopW2;
j++;

        Figure* QueenB = new Figure(QUEEN,BLACK, board, placeINT {3,0});
        Figure* KingB = new Figure(KING,BLACK, board, placeINT {4,0});
listFigures[j] = QueenB;
j++;
listFigures[j] = KingB;
j++;
        Figure* QueenW = new Figure(QUEEN,WHITE, board, placeINT {3,cellNums-1});
        Figure* KingW = new Figure(KING,WHITE, board, placeINT {4,cellNums-1});
listFigures[j] = QueenW;
j++;
listFigures[j] = KingW;
}
