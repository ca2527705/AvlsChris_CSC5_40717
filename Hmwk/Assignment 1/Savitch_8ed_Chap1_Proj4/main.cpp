/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 8, 2015, 10:23 AM
 * Purpose: Hmwk Proj4
 */

//System Libraries
#include <iostream>

//User libraries

//Global Constants

//Function Prototypes

//Execution begins now!
using namespace std;


int main(int argc, char** argv) {
   int number_of_pods,peas_per_pod,total_peas;
   
   cout<<"Hello"<<endl;
   cout<<"Press return after entering a number.\n";
   cout<<"Enter the number of pod:\n";
   cin>>number_of_pods;
   cout<<"Enter the number of peas in a pod:\n";
   cin>>peas_per_pod;
   total_peas=number_of_pods*peas_per_pod;
   cout<<"If you have ";
   cout<<number_of_pods;
   cout<<" pea pods\n";
   cout<<"and ";
   cout<<peas_per_pod;
   cout<<" peas in each pod, then\n";
   cout<<"you have ";
   cout<<total_peas;
   cout<<" peas in all the pods.\n";
   cout<<"Goodbye.\n";

    return 0;
}

