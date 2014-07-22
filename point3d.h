//Jared Rainwater --- point3d.h
/*
    Description
    Prototypes and implementation for Point3D class
*/

#ifndef POINT3D_H
#define POINT3D_H
#include <iostream>
#include <cstdlib>

using namespace std;

typedef const double cdbl;

class Point3D
{
private:
    double x, y, z;
    
public:
    //Default Constructor
    //Post: Constructs and returns a Point3D with random values (0-1) for members x,y,z
    Point3D();
    
    //Getters
    //Post: Returns members x, y, or z
    double get_x() const { return x; }
    double get_y() const { return y; }
    double get_z() const { return z; }
    
    //Setters
    //Post: Change values of members z,y or z
    void set_x(double val) { x = val; return; }
    void set_y(double val) { y = val; return; }
    void set_z(double val) { z = val; return; }
    
    //Desc: Use class with <<
    //Pre: None
    //Post: Sends x,y,z to stream and returns the stream
    //      Format: "x y z"
    friend ostream& operator <<(ostream& out, const Point3D& point);
    
    //Desc: Add each coord in a point together
    //Pre: None
    //Post: Return new point with added coords
    friend Point3D operator +(const Point3D& lhs, const Point3D& rhs);
    
    //Desc: Add point in place
    //Pre: None
    //Post: Adds rhs x,y,z to the current point x,y,z
    Point3D& operator +=(const Point3D& rhs);
    
    //Desc: Subtract x,y,z of two points
    //Pre: None
    //Post: Return new point with subtracted coords
    friend Point3D operator -(const Point3D& lhs, const Point3D& rhs);
    
    //Desc: Subtract points in place
    //Pre: None
    //Post: Subtracts rhs x,y,z from the current point
    Point3D& operator -=(const Point3D& rhs);
    
    //Desc: Multiply point with a scalar
    //Pre: scalar must respond to *= with double
    //Post: Return new point with multiplied coords
    template <typename T>
    friend Point3D operator *(const Point3D& lhs, const T& scalar);
    
    //Desc: Multiply point with scalar
    //Pre: scalar must respond to *= with double
    //Post: Multiplies rhs x,y,z with the scalar
    template <typename T>
    Point3D& operator *=(const T& scalar);

    //Desc: Divide point by a scalar
    //Pre: scalar must respond to /= with double
    //Post: Return new point with divided coords
    template <typename T>
    friend Point3D operator /(const Point3D& lhs, const T& scalar);
    
    //Desc: Multiply point with scalar
    //Pre: scalar must respond to /= with double
    //Post: Divides point's x,y,z by scalar
    template <typename T>
    Point3D& operator /=(const T& scalar);
};

#include "point3d.hpp"

#endif