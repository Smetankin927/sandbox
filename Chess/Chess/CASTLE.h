#pragma once
#ifndef CASTLE_H
#define CASTLE_H

#include "Figure.h"

class Castle: public Figure
{
public:
    Castle(const Colors color,Board* board, placeINT position);
private:
   void updateAllowPosition() override;
};


#endif // CASTLE_H
