#pragma once
#ifndef BISHOP_H
#define BISHOP_H

#include "Figure.h"

class Bishop: public Figure
{
public:
    Bishop(const Colors color,Board* board, placeINT position);
private:
    void updateAllowPosition() override;
};


#endif // BISHOP_H
