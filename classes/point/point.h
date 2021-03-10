#ifndef POINT_H
#define POINT_H
#include<string>

class Point
{

public:
   Point();
   Point(double x,double y);
   void setX(double x);
   void setY(double y);
   double getX() const;
   double getY() const;

   double distance(const Point &p);
   
   std::string to_string() const;

   void print() const;

   Point add(const Point &p);

private:
   void a_private_function() const;
   double m_x;
   double m_y;
};

#endif
