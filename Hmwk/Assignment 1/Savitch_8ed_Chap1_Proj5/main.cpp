/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 8, 2015, 10:52 AM
 * Purpose: Product and sums
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes


using namespace std;

//Execution Begins NOW!
int main(int argc, char** argv) {
    //Verify the variables
    int a, b, product, sum;
    //Start the equations by making them enter the data
    cout<<"This program will add and multiply two numbers.\n";
    cout<<"Enter two numbers please.\n";
    cin>> a;
    cin>> b;
    //Write out the equations
    sum=a+b;
    product=a*b;
    //Have the results presented to them
    cout<<"The sum of your numbers is.\n";
    cout<<sum<<endl;
    cout<<"The product of your numbers is.\n";
    cout<<product<<endl;
    cout<<"This is the end of the program.\n";

    return 0;
}

