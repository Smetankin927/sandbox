#pragma once
#ifndef GAME_H
#define GAME_H

#include <QApplication>
#include <QGraphicsItem>
#include<QGraphicsScene>
#include<QGraphicsView>

#include"Figure.h"

#define sceneHeigth (boardHeight+100)
#define sceneWidth (boardWidth+100)

class Game{
public:
    Game();
    void startGame();
    void setFigures();
private:
    QGraphicsScene * scene;
    Board * board;
    QGraphicsView * view;
    Figure * listFigures[cellNums*4];
};

#endif // GAME_H
