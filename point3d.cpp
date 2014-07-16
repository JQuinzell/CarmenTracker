#include "point3d.h"

Point3D::Point3D(cdbl x_val, cdbl y_val, cdbl z_val): x(x_val), y(y_val), z(z_val)
{
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