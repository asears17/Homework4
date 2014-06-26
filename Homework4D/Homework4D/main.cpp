//
//  main.cpp
//  Homework4D
//
//  Created by Drew Sears on 6/6/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//11.9

#include <iostream>
#include <string>
using namespace std;

class Rectangle2D
{

private:
    double x, y;
    double width, height;

public:
    Rectangle2D()
    {
        x=0;
        y=0;
        width= 1;
        height=1;
    }
    
    Rectangle2D(double x, double y, double width, double height)
    {
        this ->x = x;
        this ->y = y;
        this ->width= width;
        this ->height= height;
    }
    
    double getX() const
    {
        return x;
    }
    
    void setX(double x)
    {
        this->x=x;
    }
    
    double getY() const
    {
        return y;
    }
    
    void setY(double y)
    {
        this->y=y;
    }
    
    
    double getArea() const
    {
        return width*height;
    }
    
    double getPerimeter() const
    {
        return width+width+height+height;
    }
    
    bool contains(const Rectangle2D &r)const//problems
    {
        return contains(r.x - r.width - r.width - r.y) && contains(r.x + r.width + r.height + r.y)
        && contains(r.x, r.y - r.height - r.width)&& contains(r.x, r.y + r.height + r.width);
        return true;
    }
    
    bool overlaps (const Rectangle2D &r) const//problems again
    {
        return distance(x, y, r.x, r.y) <= width + height + r.height+ r.width;
        
    }
    
};

int main()
{
    Rectangle2D r1(2, 2, 5.5, 4.9);
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter " << r1.getPerimeter() << endl;
    
    cout << r1.contains(3,3) << endl;
    
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    cout << r1.contains(r2);
    cout << r1.overlaps(r3);
    
}

