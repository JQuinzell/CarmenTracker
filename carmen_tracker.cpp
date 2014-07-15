//Jared Rainwater --- carmen_tracker.cpp
//Description

#include <iostream>
#include <fstream>
#include <string>
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
    
    
}