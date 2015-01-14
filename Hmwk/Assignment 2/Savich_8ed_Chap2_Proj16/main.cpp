/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 14, 2015, 7:48 AM
 * Purpose: Mad Lib
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    float radius, vm;
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    vm=(4.0/3.0)*3.1415*radius*radius*radius;
    cout<<" The volume is "<<vm<<endl;
    

    return 0;
}

