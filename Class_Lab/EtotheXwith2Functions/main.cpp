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
float approxEx(float);

int main(int argc, char** argv) {
    //Declare variables
    float x;
    //Prompt the user for the power of e^x
    cout<<"What x in e^x would you like to use?"<<endl;
    cin>>x;

    //compare the results
    cout<<"Approximate e^x = "<<approxEx(x)<<endl;
    cout<<"Exact e^x    = "<<exp(x)<<endl;
    //Output the result
    
    return 0;
}
float approxEx(float x){
    float etox=1;
       for(int n=1;n<=13;n++){
       etox+=(pow(x,n)/nFactrl(n));
    }
    return etox;
}

int nFactrl(int n){
    //declare variable
    //Note: function only works for value 0 to 13
    int factorial=1;
    if(n==0||n==1)return factorial;
    else if(n<=13){
        for(int i=2;i<=n;i++){
                factorial*=i;
    }
        return factorial;
    }else{
        return -1;
    }
}