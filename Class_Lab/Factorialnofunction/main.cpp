/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Factorial
 * Created on January 21, 2015, 8:53 AM
 */

//System libraries
#include <iostream>

using namespace std;

//User Libraries

//Global constants

//Function prototypes
int main(int argc, char** argv) {
    //Declare variables
    int nFactrl=1,n;
    //Prompt user for factorial
    cout<<"What N would you like to use to"<<endl;
    cout<<"calculate N!"<<endl;
    cin>>n;
    //Do the calculation
    for (int i=1;i<=n;i++){
        nFactrl*=i;
    }
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    
    return 0;
}

