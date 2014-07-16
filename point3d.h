//Jared Rainwater --- point3d.h
//

#ifndef POINT3D_H
#define POINT3D_H
#include <iostream>
using namespace std;

typedef const double cdbl;

class Point3D
{
private:
    double x, y, z;
    
public:
    //Constructors
    //default sets everything to 0
    //Parameters are passed in the order x,y,z.
    Point3D(cdbl x_val=0, cdbl y_val=0, cdbl z_val=0);
    
    //Desc: Use class with <<
    //Pre: None
    //Post: Sends x,y,x to stream and returns the stream
    friend ostream& operator <<(ostream& out, Point3D& point);
    
    //Desc: Add each coord in a point together
    //Pre: None
    //Post: Return new point with added coords
    friend Point3D operator +(const Point3D& lhs, const Point3D& rhs);
};

#endif