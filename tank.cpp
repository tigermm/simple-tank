#include "tank.h"

Tank::Tank(int x, int y, int bombs){
    this->mOrientation = TOP;
    this->mBombs = bombs;
    this->mX = x;
    this->mY = y;
}

void Tank::fire(){
    this->mBombs--;
}

void Tank::top(){
    mX += STEP;
    mOrientation = TOP;
}

void Tank::bottom(){
    mX -= STEP;
    mOrientation = BOTTOM;
}

void Tank::left(){
    mY -= STEP;
    mOrientation = LEFT;
}

void Tank::right(){
    mY += STEP;
    mOrientation = RIGHT;
}
