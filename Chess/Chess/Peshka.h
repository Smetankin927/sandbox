#pragma once
#ifndef PESHKA_H
#define PESHKA_H
#include "Cell.h"
#include "Figure.h"
//#include "ENUMS.h"
class Peshka : public Figure {
public:
    Peshka(Cell& board) : Figure(PESHKA,x,y) {}

    //void Move() override{};

private:
    qreal x;
    qreal y;
    Сhessmen type_;


   void UpdateAllowedPosition() {};

};
#endif // PESHKA_H
