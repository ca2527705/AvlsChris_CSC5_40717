/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Babylonian algorithm
 * Created on January 13, 2015, 11:35 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float number, guess, r;
    //Input a number
    
    cout<<"Input a number to estimate it's square root.\n";
    cout<<"The format fill be a positive float.\n";
    cin>>number;
    //First pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //output the first pass
    cout<<"First Pass calculation -> "<<guess<<endl;
    //Second pass
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Second Pass calculation -> "<<guess<<endl;
    //Third pass
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Third Pass calculation -> "<<guess<<endl;
    //Forth Pass
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Forth Pass calculation -> "<<guess<<endl;
    
    //Exit stage right
            
            

    return 0;
}

