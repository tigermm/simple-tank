#ifndef TANK_H
#define TANK_H

#include <string>
#include "unit.h"

<<<<<<< HEAD
=======
const int STEP = 10;

>>>>>>> eef8f258634f191777fe42096c36acdc03ab98ed
namespace model {

enum Orientation {
    TOP,
    LEFT,
    RIGHT,
    BOTTOM
};

class Tank : public Unit {

private:
    std::string m_player;
    int m_orientation;
    int m_bombs;
    int m_health;

public:
    Tank(std::string player, int bombs, int width,
         int height, int x, int y);
    void left();
    void right();
    void top();
    void bottom();
    void fire();
};

}
#endif // TANK_H
