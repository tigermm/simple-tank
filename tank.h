#ifndef TANK_H
#define TANK_H
const int STEP = 10;

enum Orientation{
    TOP,
    LEFT,
    RIGHT,
    BOTTOM
};

class Tank{
private:
    int mX;
    int mY;
    int mOrientation;
    int mBombs;
public:
    Tank(int x, int y, int bombs);

    void left();

    void right();

    void top();

    void bottom();

    void fire();
};
#endif // TANK_H
