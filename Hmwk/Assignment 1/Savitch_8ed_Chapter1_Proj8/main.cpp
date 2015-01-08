/* 
 * File:   main.cpp
 * Author: 
 * Created on January 8, 2015, 9:02 AM
 * Purpose: Homework chapter 1 problem 8
 */

//System Libraries
#include <iostream>
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins now!
using namespace std;


int main(int argc, char** argv) {
    unsigned char qrts , dime, nicks, penns;
    short tlchng;
    cout<<"This program counts your change!"<<endl;
    cout<<"Enter the amount of quarters you have."<<endl;
    cin>>qrts;
    cout<<"Enter the amount of dimes you have."<<endl;
    cin>>dime;
    cout<<"Enter the amount of nickles you have"<<endl;
    cin>>nicks;
    tlchng=(qrts-48)*25+
           (dime-48)*10+
           (nicks-48)*5;
    cout<<"You have"<<endl;
    cout<<tlchng;
    cout<<"cents in change"<<endl;
    return 0;
}

