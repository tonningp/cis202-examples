#include "polygon.h"


Polygon::Polygon(const std::string &name)
{
    m_name = name;
}

Polygon::Polygon(const std::string &name,const std::vector<Point> &pts)
{
    m_name = name;
    m_points = pts;
}

void Polygon::add_point(const Point &p)
{
    m_points.push_back(p);
}

Polygon& Polygon::draw()
{
    std::cout << "Polygon::draw()" << std::endl;
    return *this;
}

std::vector<Point> Polygon::get_points() const
{
    return m_points;
}

std::string Polygon::to_string() const
{
   std::string s = m_name;
   s += "{";
   for(auto p : m_points) 
   {
        s += p.to_string() + ",";
   }
   s.pop_back();
   s += "}";
   return s;
}

std::ostream &operator<<(std::ostream& o,const Polygon &poly)
{
    o << poly.to_string();
    return o; 
}
