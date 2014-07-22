//Jared Rainwater --- integrator.h
/*
    Description
    Prototypes and implementation for integrator class
    Used for tracking points or turning them into butterflys
*/

#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "point3d.h"

class Integrator
{
private:
    Point3D point;
    float timestep;

    //Description: dot functions that give the next point in the sequence
    //Pre: None
    //Post: Returns value of the coordinate coordinate
    float x_dot() const;
    float y_dot() const;
    float z_dot() const;

public:
    //Default Constructor
    //Pre: None
    //Post: Constructs and returns an Integrator
    Integrator(float t=0.0001, Point3D p=Point3D()): point(p), timestep(t) {}
    
    //Getters
    //Post: Return value of member point or timestep
    Point3D get_point() const {return point;}
    float get_timestep() const {return timestep;}
    
    //Setters
    //Post: Change value of member point or timestep
    void set_point(Point3D p) {point = p; return;}
    void set_timestep(float t) {timestep = t; return;}
    
    //Description: Sets the member point to next in the sequence
    //Pre: None
    //Post: Returns next Point3D AND changes member point
    Point3D step();
};

#endif