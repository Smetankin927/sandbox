#include "ENUMS.h"

inline bool operator == (const placeINT& lhs, const placeINT& rhs)
{
if(lhs.x == rhs.x && lhs.y == rhs.y) {return true;}
else {return false;}
};

                                                //оператор для создания множества set<..> оно упорядочено
                                                //в unordered надо прописывать хеш функцию
/*inline bool operator < (const placeINT& lhs, const placeINT& rhs)
{
if(lhs.x < rhs.x || lhs.y <rhs.y) {return true;}
else {return false;}
};*/

inline uint qHash(const placeINT&key, uint seed)
{
    return qHash((key.x,key.y), seed) ^(8*(key.y-1) +key.x) ;//8 is num cells
}
