/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 13, 2015, 10:16 AM
 * Purpose:Bitcoin conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //declare variable and initialize here
    float bcToDlr=232.8;  //Jan 13th, 2015 10:17am
    float erToDlr=0.84381;//Same Date
    float ynToDlr=118.03; //Same Date
    float bitcoin, dollars, euros, yen;
    //Input the number of bitcoin and then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //convert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" =   "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" =   "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
            
    return 0;
}

