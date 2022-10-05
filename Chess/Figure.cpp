#include "Figure.h"
#include<QDebug>
#include <QEvent>
#include <QMouseEvent>
#include <ENUMS.cpp>

Figure::Figure(const Сhessmen& type, qreal x, qreal y)
{
    //drew the figure
    setRect(0,0,figureWidth,figureHeight);
    this->setPos(x, y);
}

Figure::Figure(const Сhessmen& type,const Colors color,Board* board,placeINT position)
{
    Cell * cell = board->CellPointers[position.x][position.y];
    //drew the figure with cell
    setRect(0,0,figureWidth,figureHeight);
    this->setPos((cell->x())+(cellWidth-figureWidth)/2,(cell->y())+(cellHeight-figureHeight)/2);

}

void Figure::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug()<<"good";


}

void Figure::showAllowed()
{

}


void Figure::updateAllowPosition()
{

}
