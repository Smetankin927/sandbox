
#include<QGraphicsScene>
#include "Cell.h"
#include "Figure.h"

Cell::Cell(qreal x, qreal y):QGraphicsRectItem()
{
    //drew the cell
    setRect(0,0,cellWidth,cellHeight);
    this->setPos(x, y);
}

void Cell::showFigure()
{
    Figure* fig = new Figure(PESHKA, x(),y());
    scene()->addItem(fig);
};

bool Cell::is_free()
{

};

