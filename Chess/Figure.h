#pragma once
#ifndef FIGURE_H
#define FIGURE_H

#define figureWidth 50
#define figureHeight 50

#include "Board.h"

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsSceneMouseEvent>
#include <QSet>

class Figure:  public QObject, public QGraphicsRectItem // порядок важен. вылазиет
                                                        //staticmetaobject' is not a member of 'qgraphicsitem'
{
Q_OBJECT
public:
    Figure(const Сhessmen& type, qreal x, qreal y);     // check списки ининциализации
    Figure(const Сhessmen& type,const Colors color,Board* board, placeINT position);


    void mousePressEvent(QGraphicsSceneMouseEvent * event);
public slots:
    void showAllowed();
private:
    void updateAllowPosition();
    QSet<placeINT> allowPosition;
    Cell* cell_;
    Board* board_;
};

#endif // FIGURE_H
