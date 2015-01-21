/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 21, 2015, 8:07 AM
 */

//System libraries
#include <iostream>

using namespace std;

//User Libraries

//Global constants

//Function prototypes
float Mpg(float numltrs, float nummile);

int main(int argc, char** argv) {
    
    float numltrs, nummile, milesper;
    
    cout<<"Input the number of liters used"<<endl;
    cin>>numltrs;
    cout<<"Input the number of miles traveled\n";
    cin>>nummile;

    milesper=Mpg(numltrs,nummile);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<milesper<<endl;
    
    return 0;
}


float Mpg(float numltrs, float nummile)
{
    const float Gallon=0.264179*numltrs;
    
    return (Gallon/nummile);
    
}
           