#pragma once

#ifndef CELL_H
#define CELL_H
#define cellHeight 100
#define cellWidth  100

#include <QGraphicsRectItem>
#include "ENUMS.h"


class Cell:public QGraphicsRectItem{
public:
    Cell(qreal x, qreal y);
    void showFigure();
    bool is_free();
private:
    Colors color;
    bool freestatus;

};
#endif // CELL_H
