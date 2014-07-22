#include "point3d.h"

Point3D::Point3D()
{
    double rand_x = rand()%101/100.0;
    double rand_y = rand()%101/100.0;
    double rand_z = rand()%101/100.0;
    
    x = rand_x;
    y = rand_y;
    z = rand_z;
}

ostream& operator <<(ostream& out, const Point3D& point)
{
    out << point.x << " " << point.y << " " << point.z;
    return out;
}

Point3D operator +(const Point3D& lhs, const Point3D& rhs)
{
    Point3D result(lhs);
    result.x += rhs.x;
    result.y += rhs.y;
    result.z += rhs.z;
    return result;
}

Point3D& Point3D::operator +=(const Point3D& rhs)
{
    *this = *this + rhs;
    return *this;
}

Point3D operator -(const Point3D& lhs, const Point3D& rhs)
{
    Point3D result(lhs);
    result.x -= rhs.x;
    result.y -= rhs.y;
    result.z -= rhs.z;
    return result;
}

Point3D& Point3D::operator -=(const Point3D& rhs)
{
    *this = *this - rhs;
    return *this;
}