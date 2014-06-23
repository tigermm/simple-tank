#include "world.h"

using namespace model;

World::World(int width, int heigth)
    : m_width(width), m_height(heigth) { }

int World::width()
{
    return m_width;
}

int World::height()
{
    return m_height;
}

std::vector<Tank> World::tanks() const
{
    return m_tanks;
}

void World::setTanks(const std::vector<Tank> &tanks)
{
    m_tanks = tanks;
}
