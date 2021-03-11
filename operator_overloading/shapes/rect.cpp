#include "rect.h"

Rect::Rect(const Point &ul,double w,double h) : Polygon("rectangle") {
    add_point(ul);
    add_point(Point(ul.get_x()+w,ul.get_y()));
    add_point(Point(ul.get_x()+w,ul.get_y()-h));
    add_point(Point(ul.get_x(),ul.get_y()-h));
}

Polygon& Rect::draw()
{
    std::cout << "Rectangle's draw" << std::endl;
    Polygon::draw();
    return *this;
}
