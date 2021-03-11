#include "point.h"

std::ostream &operator<<(std::ostream& o,const Point &p)
{
    o << p.to_string();
    return o;
}

Point::Point(double x,double y) : m_x(x),m_y(y) {
}

double Point::get_x() const
{
    return m_x;
}
double Point::get_y() const
{
    return m_y;
}

std::string Point::to_string() const
{
    return std::string("(") + std::to_string(m_x) + "," + std::to_string(m_y) + ")";
}
