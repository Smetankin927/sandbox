#include <QGraphicsScene>
#include<QDebug>

#include "Board.h"
#include "Cell.h"



Board::Board(qreal x, qreal y): QGraphicsRectItem()
{
    //drew the board
    setRect(x,y,boardWidth,boardHeight);

    //fill array of pointers on cells
    Cell* cell;
    for(int i =0; i<cellNums; i++)
    {
        for(int j=0; j<8 ;j++)
        {
            cell = new Cell(boardEdge+x+cellWidth * j, boardEdge+y+cellHeight * i);

            CellPointers[i][j] = cell;
        }
    }
    //add cells in the scene (we cant. we still not add rect to the scene)
    //see main()

}



void Board::boardShowCells()
{

    for(int i =0; i<cellNums; i++)
      {  for(int j=0; j<cellNums ;j++)
        {
            qDebug()<<"here";
            scene()->addItem(CellPointers[i][j]);
        }
    }
}


