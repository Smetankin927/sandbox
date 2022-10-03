
#include<QGraphicsScene>
#include "Cell.h"
//#include "Figure.h"
Cell::Cell(qreal x, qreal y):QGraphicsRectItem()
{
    //drew the cell
    setRect(0,0,cellWidth,cellHeight);
    this->setPos(x, y);
}

