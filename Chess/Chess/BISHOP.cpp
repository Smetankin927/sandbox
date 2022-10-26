#include "BISHOP.h"
#include <ENUMS.cpp>

Bishop::Bishop(const Colors color, Board *board, placeINT position)
    :Figure(BISHOP, color, board, position)
{this->updateAllowPosition();}

void Bishop::updateAllowPosition()
{
    allowPosition.clear();
    int i=0;
    while(position.x+i<cellNums && position.y+i<cellNums)
    {
        allowPosition.insert(placeINT {position.x+i,position.y+i});
        i++;
    }

    i=0;
    while(position.x-i > 0 && position.y+i<cellNums)
    {
        allowPosition.insert(placeINT {position.x-i,position.y+i});
        i++;
    }

    i=0;
    while(position.x-i > 0 && position.y-i > 0)
    {
        allowPosition.insert(placeINT {position.x-i,position.y-i});
        i++;
    }


    i=0;
    while(position.x+i < cellNums && position.y-i > 0)
    {
        allowPosition.insert(placeINT {position.x+i,position.y-i});
        i++;
    }


};
