/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 8, 2015, 11:07 AM
 * Purpose: Hmwk Proj6
 */

//System Libraries
#include <iostream>
//B.main.cpp:9:19: error: missing terminating > character

//User libraries

//Global Constants

//Function Prototypes

//Execution begins now!
using namespace std;


 int main(int argc, char** argv) {
 //C. Multiple errors saying that argc, char, and argv were not declared
     //and missing
 //D.Misspelled main say where an error but doesnt show where exactly
 //E.main.cpp:22:33: error: expected ')' before '{' token,main.cpp:22:11: error:
     //expected initializer before 'int'  
   int number_of_pods,peas_per_pod,total_peas;
   
   cout<<"Hello"<<endl;
   //A.main.cpp:24:10: error: expected primary-expression before '<' token
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
   cout<"you have ";
   cout<<total_peas;
   cout<<" peas in all the pods.\n";
   cout<<"Goodbye.\n";

    return 0;
 }
 //F. Multiple errors stating that misspelled words were not declared. Deleting 
 //one of the < doesnt seam to cause much problems.
