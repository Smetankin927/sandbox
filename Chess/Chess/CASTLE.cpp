#include "CASTLE.h"
#include "ENUMS.h"

Castle::Castle(const Colors color, Board *board, placeINT position)
    :Figure(CASTLE, color, board, position)
{}

void Castle::updateAllowPosition()
{
    allowPosition.clear();
    //сделаем пока без учета других фигур сделаем максимально тупую реализацию
    int i=0;
    while(i<cellNums)
    {
        allowPosition.insert(placeINT {i,position.y});
        allowPosition.insert(placeINT {position.x,i});
        i++;
    }
};
