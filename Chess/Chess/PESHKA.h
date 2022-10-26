#pragma once
#ifndef PESHKA_H
#define PESHKA_H

#include "Figure.h"

class Peshka: public Figure
{
public:
    Peshka(const Colors color,Board* board, placeINT position);
private:
    void updateAllowPosition() override;
};





#endif // PESHKA_H
