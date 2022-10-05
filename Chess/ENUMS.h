#pragma once

#ifndef ENUMS_H
#define ENUMS_H
#include <QGraphicsRectItem>

struct placeINT //позиция ячейки
{
    int x;
    int y;
};



enum Colors
{
    WHITE,
    BLACK
};
enum Сhessmen{
    PESHKA,
    CASTLE,
    HORSE,
    BISHOP,
    QUEEN,
    KING

};

enum Labels{
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H
};



#endif // ENUMS_H
