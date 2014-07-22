//Jared Rainwater --- integrator.h

#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "point3d.h"

class Integrator
{
private:
    Point3D point;
    float timestep;
public:
    Integrator(float t=0.0001, Point3D p=Point3D()): point(p), timestep(t) {}
    
    Point3D get_point() {return point;}
    float get_timestep() {return timestep;}
    void set_point(Point3D p) {point = p; return;}
    void set_timestep(float t) {timestep = t; return;}

    float x_dot();
    float y_dot();
    float z_dot();
    
    Point3D step();
};

#endif