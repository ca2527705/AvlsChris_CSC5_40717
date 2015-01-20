/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Babylonian algorithm
 * Created on January 13, 2015, 11:35 AM
 * While Group
 */

//System Libraries
#include <iostream>
#include <cmath>

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
   for (int count=1;abs(guess-r)>.01;count++){
        r=number/guess;
        guess=(guess+r)/2;
        //output the first pass
        cout<<"Loop "<<count<<" ";
        cout<<" -> "<<guess<<endl;
     } 
    //Exit stage right
            
            

    return 0;
}

