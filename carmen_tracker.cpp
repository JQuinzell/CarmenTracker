//Jared Rainwater --- carmen_tracker.cpp
//Description

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "point3d.h"
#include "integrator.h"
using namespace std;

const int MAX_INTEGRATIONS = 10;

int main()
{
    srand(time(NULL));
    
    int iterations, num_villains;
    double key;
    string file_name, output_name;
    Integrator integrators[MAX_INTEGRATIONS];

    cout << "Welcome. Please provide the file name: ";
    cin >> file_name;
    ifstream fin(file_name.c_str());
    
    //get info from file
    fin >> iterations;
    fin >> key;
    fin >> num_villains;
    fin >> output_name;
    fin.close();
        
    //track villains
    ofstream fout(output_name.c_str());
    
    for(int i = 0; i < iterations; i++)
    {
        for(int j = 0; j < num_villains; j++)
        {
            fout << integrators[j].step() << " ";
        }
        fout << "\n";
    }
    fout.close();
    return 0;
    
}