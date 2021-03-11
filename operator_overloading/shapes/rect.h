#ifndef RECT_H
#define RECT_H

#include "point.h"
#include "polygon.h"

class Rect : public Polygon
{
    public:
        Rect(const Point& ul,double w,double h);

        Polygon& draw();

};

#endif
