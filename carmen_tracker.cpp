//Jared Rainwater --- carmen_tracker.cpp
//Description

#include <iostream>
#include <fstream>
#include <string>
#include "point3d.h"
using namespace std;

int main()
{
    int iterations, num_villains;
    double key;
    string file_name, output_name;
    
    cout << "Welcome. Please provide the file name: ";
    cin >> file_name;
    ifstream fin(file_name.c_str());
    
    //get info from file
    fin >> iterations;
    fin >> key;
    fin >> num_villains;
    fin >> output_name;
    
    cout << iterations << endl;
    cout << key << endl;
    cout << num_villains << endl;
    cout << output_name << endl;
    
    //track villains
    
    //testing point class
    Point3D point(1,1,1);
    Point3D point2(1,1,1);
    Point3D point3 = point + point2;
    point3 += point;
    cout << (point + point2) << endl;
    cout << (point3) << endl;
    
    
}