#include<iostream>
#include<vector>
#include<memory>
#include "point.h"


void create_some_points()
{

    std::shared_ptr<Point> p1(new Point(2,2));
    std::shared_ptr<Point> p2(new Point(3,3));


    p1->setX(10);
    p1->setY(12);


}

int main()
{
    Point some_point;
    some_point.print();
    

    for(int i=0;i<1000;i++)
        create_some_points();
/*
    std::vector<Point> points;
    points.push_back(Point(1,1));
    points.push_back(Point(2,2));
    points.push_back(Point(3,3));
    points.push_back(Point(4,4));

    for(Point p : points)
    {
        std::cout << p.to_string() << std::endl;
    }

    Point p1(1,2);
    Point p2(2,3);

    std::cout << p1.distance(p2) << std::endl;

    p1.print();
    p2.print();

    p1.add(Point(5,3)).print();
    */

    return 0;
}
