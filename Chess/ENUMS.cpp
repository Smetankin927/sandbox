#include "ENUMS.h"

bool operator == (const placeINT& lhs, const placeINT& rhs)
{
if(lhs.x == rhs.x && lhs.y == rhs.y) {return true;}
else {return false;}
};

                                                //оператор для создания множества set<..> оно упорядочено
                                                //в unordered надо прописывать хеш функцию
bool operator < (const placeINT& lhs, const placeINT& rhs)
{
if(lhs.x < rhs.x || lhs.y <rhs.y) {return true;}
else {return false;}
};
