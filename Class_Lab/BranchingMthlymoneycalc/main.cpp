/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Monthly money calc
 * Created on January 14, 2015, 11:19 AM
 */
//System libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User libraries

//Global Constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    //Declare variables
    float i;//Interest Rate per cent per year
    float t;//Temp variable
    float l;//Loan amount $'s
    unsigned short n;//Number of months
    float mp;//Monthly Payment $'s
    //Input the variables required
    cout<<"What is the interest rate in per cent per year!(format float)"<<endl;
    cin>>i;
    i/=(100*12);//Convert to decimal
    cout<<"What is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"Number of monthly Payments (format integer)"<<endl;
    cin>>n;
    //Calculate the monthly payment
    if(i<=0){
    mp=l/n;
    }else{
    t=pow(1+i,n);
    mp=i*t*l/(t-1);
    }
    //Display the results
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly payment = $"<<mp<<endl;
    //Exit stage right!
    
return 0;
}

