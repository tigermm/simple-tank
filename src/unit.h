#ifndef UNIT_H
#define UNIT_H

namespace model {

class Unit {

protected:
    int m_width;
    int m_height;
    int m_x;
    int m_y;

    Unit(int width, int height, int x, int y);

public:
    int width() const;
    int height() const;
    int x() const;
    int y() const;
};

}

#endif // UNIT_H
