/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Problem 1
 * Created on January 27, 2015, 10:23 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    //Verify the variables, my son
    int n,sum;
    //Ask the question and have them put a number in
    cout<<"How many lines would you like to output?"<<endl;
    cin>>sum;
    //Solution! use iomanip to move the line along with the number
    //As it scrolls down!
    do
        cout<<setw(sum+1)<<sum--<<endl;
    
    while(sum>=1);

    
    return 0;
}

