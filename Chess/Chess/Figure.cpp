#include "Figure.h"
#include <QGraphicsScene>
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

Figure::Figure(const Сhessmen& type, const Colors color,Board* board,placeINT position):
    type(type),color(color),board_(board),position(position)

{
    Cell * cell = board->CellPointers[position.x][position.y];
    //drew the figure with cell
    setRect(0,0,figureWidth,figureHeight);
    this->setPos((cell->x())+(cellWidth-figureWidth)/2,(cell->y())+(cellHeight-figureHeight)/2);

}

void Figure::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug()<<"good";
    showAllowed();
}

void Figure::showAllowed()
{
    qDebug()<<"hell";
    for (auto cells : allowPosition)
    {
        qDebug()<<"Greed";
        board_->CellPointers[cells.x][cells.y]->setBrush(Qt::red);
        //board_->CellPointers[cells.x][cells.y]->update();
    }
}




