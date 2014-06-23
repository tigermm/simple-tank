#include "unit.h"

using namespace model;

Unit::Unit(int width, int height, int x, int y)
: m_width(width), m_height(height), m_x(x), m_y(y) { }

int Unit::width() const {
    return m_width;
}

int Unit::height() const {
    return m_height;
}

int Unit::x() const {
    return m_x;
}

int Unit::y() const {
    return m_y;
}
