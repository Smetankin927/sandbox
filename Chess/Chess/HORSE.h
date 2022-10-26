#pragma once
#ifndef HORSE_H
#define HORSE_H

#include "Figure.h"

class Horse: public Figure
{
public:
    Horse(const Colors color,Board* board, placeINT position);
private:
    void updateAllowPosition() override;
};


#endif // HORSE_H
