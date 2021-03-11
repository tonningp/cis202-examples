/*
 * File: main.cpp
 * Description:
 * Author:
 * Date:
 * Email:
*/
#include<iostream>
#include<vector>
//#include "point.h"
#include "polygon.h"
#include "rect.h"
//#include "triangle.h"
//#include "trapezoid.h"

using namespace std;

int main()
{
 //   Point p(1.5,2.5);
 //   std::cout << Point(2.5,3.5) << std::endl;
    
    std::vector<Polygon*> shapes;
    shapes.push_back(new Polygon("triangle",{Point(1.0,0.5),Point(2.0,0.5),Point(1.0,1.5)}));
    shapes.push_back(new Rect(Point(1.0,2.0),1.0,1.0));

    for(auto s : shapes) {
        std::cout << *s << endl;
        s->draw();
    }

    return 0;
}
