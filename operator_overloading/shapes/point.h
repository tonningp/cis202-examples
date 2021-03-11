#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>

class Point
{
    public:
        Point() : m_x(0.0),m_y(0.0) {};
        Point(double x,double y);
        double get_x() const;
        double get_y() const;
        std::string to_string() const;
    private:
        double m_x;
        double m_y;
};


std::ostream &operator<<(std::ostream& o,const Point &p);

#endif
