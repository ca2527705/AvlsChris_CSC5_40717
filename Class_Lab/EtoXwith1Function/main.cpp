/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Factorial
 * Created on January 21, 2015, 8:53 AM
 */

//System libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global constants

//Function prototypes
int nFactrl(int);

int main(int argc, char** argv) {
    //Declare variables
    float approxEx=1,exactEx,x;
    //Prompt the user for the power of e^x
    cout<<"What x in e^x would you like to use?"<<endl;
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=13;n++){
       approxEx+=(pow(x,n)/nFactrl(n));
    }
    //Calculate the exact e^x
    exactEx=exp(x);
    //compare the results
    cout<<"Approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x    = "<<exactEx<<<endl;
    //Output the result
    
    return 0;
}

int nFactrl(int n){
    //declare variable
    //Note: function only works for value 0 to 13
    int factorial=1;
    if(n==0||n==1)return factorial;
    else if(n<=13){
        for(int i=1;i<=13;i++){
                factorial*=i;
    }
        return factorial;
    }else{
        return -1;
    }
}