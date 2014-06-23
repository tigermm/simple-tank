#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <vector>
#include "tank.h"

namespace model {

class World {

private:
    int m_width;
    int m_height;
    std::vector<Tank> m_tanks;

public:
    World(int width, int heigth);
    int width();
    int height();
    std::vector<Tank> tanks() const;
    void setTanks(const std::vector<Tank> &tanks);
};

}

#endif // GAMEFIELD_H
