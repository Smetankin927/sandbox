#include "HORSE.h"
#include "ENUMS.h"

Horse::Horse(const Colors color, Board *board, placeINT position)
    :Figure(HORSE, color, board, position)
{}

void Horse::updateAllowPosition()
{
    allowPosition.clear();

        if(position.x+2 < cellNums && position.y+1 < cellNums)
        {
            allowPosition.insert(placeINT {position.x+2,position.y + 1});
        }
        if(position.x+2 < cellNums && position.y-1 < cellNums)
        {
            allowPosition.insert(placeINT {position.x+2,position.y - 1});
        }
        if(position.x-2 < cellNums && position.y+1 < cellNums)
        {
            allowPosition.insert(placeINT {position.x-2,position.y + 1});
        }
        if(position.x-2 < cellNums && position.y-1 < cellNums)
        {
            allowPosition.insert(placeINT {position.x-2,position.y - 1});
        }
        if(position.x-1 < cellNums && position.y-2 < cellNums)
        {
            allowPosition.insert(placeINT {position.x-1,position.y - 2});
        }
        if(position.x+1 < cellNums && position.y-2 < cellNums)
        {
            allowPosition.insert(placeINT {position.x+1,position.y - 2});
        }
        if(position.x-1 < cellNums && position.y+2 < cellNums)
        {
            allowPosition.insert(placeINT {position.x-1,position.y + 2});
        }
        if(position.x+1 < cellNums && position.y+2 < cellNums)
        {
            allowPosition.insert(placeINT {position.x+1,position.y + 2});
        }

};
