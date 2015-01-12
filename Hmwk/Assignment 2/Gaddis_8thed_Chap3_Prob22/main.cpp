/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 12, 2015, 10:54 AM
 * Purpose: Hmwk problem 22/Use cmath function
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>       //Math function library
#include <iomanip>      //Format Library
using namespace std;

//USer Libraries

//Global Constants
const float PIDIV4=atan(1);
const float CNVDGRD=PIDIV4/45;

//function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object
    ofstream output;
    //open the file
    output.open("SinCosTan.dat");
    //Declare the angle variable as an integer
    //in degrees, and the radian angle as a float
    int angDeg=rand()%361-180;//angle [-180,180]
    float angRad=angDeg*CNVDGRD;
    // Output the angle to the screen
    output<<" Angle in degrees =>"<<angDeg<<endl;
    output<<" Angle in radians =>"<<angRad<<endl;
    //outpost the sin,cos, tan
    output<<fixed<<setprecision(4)<<showpoint;
    output<<" sin("<<angDeg<<") ="<<setw(8)<<sin(angRad)<<endl;
    output<<" con("<<angDeg<<") ="<<setw(8)<<cos(angRad)<<endl;
    output<<" tan("<<angDeg<<") ="<<setw(8)<<tan(angRad)<<endl;
    //Output
    //close the stream
    output.close();
    return 0;
}