#include "Figure.h"


                                            // для использования find(begin, end, element)
                                            // ind(begin(cont), end(cont), placeFigure {6,5}) != end(cont) -- correct
                                            //как работает QSet?? find()???
bool operator == (const placeFigure& lhs, const placeFigure& rhs)
{
if(lhs.x == rhs.x && lhs.y == rhs.y) {return true;}
else {return false;}
}

                                            //оператор для создания множества set<..> оно упорядочено
                                            //в unordered надо прописывать хеш функцию
bool operator < (const placeFigure& lhs, const placeFigure& rhs)
{
if(lhs.x < rhs.x || lhs.y <rhs.y) {return true;}
else {return false;}
}

Figure::Figure(const Сhessmen &type, qreal x, qreal y)
{
    //drew the cell
    setRect(0,0,figureWidth,figureHeight);
    this->setPos(x, y);
}
