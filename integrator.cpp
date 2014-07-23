//Jared Rainwater --- integrator.cpp
//Description
/*
    Definitions for integrator class functions
*/
#include "integrator.h"

const int SIGMA = 10;
const int RHO = 28;
const float BETA = 8/3.0;

float Integrator::x_dot() const
{
    return point.get_x() + timestep * (SIGMA * (point.get_y() - point.get_x()));
}

float Integrator::y_dot() const
{
    return point.get_y() + timestep * (point.get_x() * (RHO - point.get_z()) - point.get_y());
}
float Integrator::z_dot() const
{
    return point.get_z() + timestep * (point.get_x() * point.get_y() - BETA * point.get_z());
}

Point3D Integrator::step()
{
    point.set_x(x_dot());
    point.set_y(y_dot());
    point.set_z(z_dot());
    return point;
}