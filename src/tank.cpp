#include "tank.h"

using namespace model;

Tank::Tank(std::string player, int bombs, int width,
           int heigth, int x, int y)
           :Unit(width, heigth, x, y) {

    m_player = player;
    m_orientation = TOP;
    m_bombs = bombs;
}

void Tank::fire() {
    m_bombs--;
}

void Tank::top() {
    if (m_orientation == TOP)
        m_x++;
    else
        m_orientation == TOP;
}

void Tank::bottom() {
    if (m_orientation == BOTTOM)
        m_y--;
    else
        m_orientation == BOTTOM;
}

void Tank::left() {
    if (m_orientation == LEFT)
        m_x--;
    else
        m_orientation == LEFT;
}

void Tank::right() {
    if (m_orientation == RIGHT)
        m_x++;
    else
        m_orientation == RIGHT;
}
