/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Use the babylonian 10 for retirement
 * Created on January 27, 2015, 9:11 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float retirement(float,float,float,int);

//Execution begins Here!

int main(int argc, char** argv) {
    //declare variables
    float salary=75000.0f;
    float invRate=0.05f;
    float defPrct=0.15f;//Babylonian 10
    float ndSave=salary/invRate;
    float retSav=0;
    float nmYears;
    cout<<"You need to save $"<<ndSave<<endl;
    cout<<"Year     Savings"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    //Calculate When We can Retire
    for(int year=1;retSav<=ndSave;year++){
        retSav=retirement(0.0,invRate,defPrct*salary,year);
        cout<<setw(4)<<year<<" Savings = $"<<retSav<<endl;
    }
    //Exit stage right!
    return 0;
}
float retirement(float p,float i,float d,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}
