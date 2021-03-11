#ifndef POLYGON_H
#define POLYGON_H
#include <string>
#include <vector>
#include "point.h"

class Polygon
{
    public:
        Polygon(): m_name("empty_polygon"){};
        Polygon(const std::string &name);
        Polygon(const std::string &name,const std::vector<Point> &p);
        void add_point(const Point &p);
        virtual Polygon& draw();
        std::vector<Point> get_points() const;
        std::string to_string() const;
    private:
        std::string m_name;
        std::vector<Point> m_points;
};

std::ostream &operator<<(std::ostream& o,const Polygon &p);

#endif
