#ifndef CELL_H
#define CELL_H
#define cellHeight 100
#define cellWidth  100

#include <QGraphicsRectItem>

#include "ENUMS.h"
//S#include "Figure.h"

class Cell:public QGraphicsRectItem{
public:
    Cell(qreal x, qreal y);
    //Cell (qreal x, qreal y, Figure * figure);

    void showFigure();
    bool is_free();
private:
    Colors color;
    bool freestatus;
    //Figure * figure;
};
#endif // CELL_H
