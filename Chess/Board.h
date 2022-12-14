#pragma once
#ifndef BOARD_H
#define BOARD_H

#define boardEdge 50
#define boardHeight 900
#define cellNums 8
#define boardWidth  900
#define boardXPosition 0
#define boardYPosition 0

#include <QGraphicsRectItem>
#include "Cell.h"

class Board:public QGraphicsRectItem{
public:
    Board();
    Board(qreal x, qreal y);

    void showCells();
    void setCells();
    Cell* CellPointers[cellNums][cellNums];
private:

};


#endif // BOARD_H
