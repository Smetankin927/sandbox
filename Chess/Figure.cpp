#include "Figure.h"
#include "Cell.h"

Figure::Figure(const Сhessmen &type, qreal x, qreal y)
{
    //drew the figure
    setRect(0,0,cellWidth,cellHeight);
    this->setPos(x, y);
}
