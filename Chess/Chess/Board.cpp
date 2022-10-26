#include <QGraphicsScene>
#include<QDebug>

#include "Board.h"




Board::Board()
{

}

Board::Board(qreal x, qreal y): QGraphicsRectItem()
{
    //drew the board  
    setRect(x,y,boardWidth,boardHeight);
}

void Board::showCells()
{
    for(int i =0; i<cellNums; i++)
      {  for(int j=0; j<cellNums ;j++)
        {

            this->scene()->addItem(CellPointers[i][j]);
            //qDebug()<<"here"<<CellPointers[i][j]->x();
        }
    }
}


void Board::setCells()
{
    qreal addX = (boardWidth-(cellWidth*cellNums))/2;
    qreal addY = (boardHeight-(cellHeight*cellNums))/2;
    //fill array of pointers on cells
    Cell* cell;
    for(int i =0; i<cellNums; i++)
    {
        for(int j=0; j<cellNums ;j++)
        {
            cell = new Cell(boardEdge+this->x()+addX+cellWidth * j, boardEdge+this->y()+addY+cellHeight * i, {j,i});

            CellPointers[j][i] = cell;
        }
    }
    //add cells in the scene (we cant. we still not add rect to the scene)
    //see main()
}



