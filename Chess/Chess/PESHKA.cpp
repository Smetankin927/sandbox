#include "PESHKA.h"
#include <ENUMS.cpp>

Peshka::Peshka(const Colors color, Board *board, placeINT position)
    :Figure(PESHKA, color, board, position)
{this->updateAllowPosition();}

void Peshka::updateAllowPosition()
{
    allowPosition.clear();
    allowPosition.insert(placeINT {position.x,position.y + 1});
};

