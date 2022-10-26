#pragma once

#ifndef CELL_H
#define CELL_H
#define cellHeight 100
#define cellWidth  100

#include <QGraphicsRectItem>
#include "ENUMS.h"

class Cell:public QGraphicsRectItem{
public:
    Cell(qreal x, qreal y, placeINT place);
    void show_i_am_allowed();
    bool is_free();
private:

    placeINT place_;
    bool freestatus;


};
#endif // CELL_H
