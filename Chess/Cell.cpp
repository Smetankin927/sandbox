
#include<QGraphicsScene>
#include "Cell.h"


Cell::Cell(qreal x, qreal y, placeINT place):QGraphicsRectItem()
{
    //drew the cell
    setRect(0,0,cellWidth,cellHeight);
    this->setPos(x, y);

    //configure additioanal information
    freestatus = true;
    place_ = place;
}

void Cell::showFigure()
{
};

bool Cell::is_free()
{
    return freestatus;
};

