#pragma once
#ifndef FIGURE_H
#define FIGURE_H

#define figureWidth 50
#define figureHeight 50


#include "ENUMS.h"



#include <QGraphicsRectItem>
#include <QObject>
#include <QSet>

struct placeFigure //позиция ячейки
{
    qreal x;
    qreal y;
};




class Figure: public QGraphicsRectItem
{

public:
    Figure(const Сhessmen& type, qreal x, qreal y);     // check списки ининциализации
    //Figure(const Сhessmen& type, Cell* cell);

private:

};

#endif // FIGURE_H
