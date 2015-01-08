/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 8, 2015, 8:18 AM
 * Purpose: Energy Drinks Stats
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;

//Execution Begins here!

int main(int argc, char** argv) {
    //Declare variables
    short custSrv=12467;//Customers Surveyed
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers
    //Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
    //output the results
    cout<<"Customers surveyed that are Energy Drinkers = ";
    cout<<custE<<endl;
    cout<<"Customer surveyed that are Citrus Drinkers = ";      
    cout<<custC<<endl;

    return 0;
}

