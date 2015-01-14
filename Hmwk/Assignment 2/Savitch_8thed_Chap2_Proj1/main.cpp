/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Hmwk Project 1
 * Created on January 13, 2015, 7:59 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//execution begins here!
int main(int argc, char** argv) {
    //Identify the variables
    char ans;
    const float c_constant=35273.92;
    float c_tons, num_boxes, c_ounces;
    //Ask if they want to begin the program
    cout<<"Would you like to convert cereal ounces to tons?\n"
            <<"Press y for yes, n for no,\n"
             <<"and then press return: ";     
        cin>>ans;
    //Set up the "if-when"     
    if(ans == 'y')
    {
    //In order for the program to be able to repeat, set up the "do-while"
        do
        {
        
    //Ask them to input the needed variables
    cout<<"Please insert how many ounce of cereal convert to tons of cereal.\n";
    cin>>c_ounces;
    //Calculate the right formulas, make sure the math adds up
    c_tons=c_ounces/c_constant;
    num_boxes=c_constant/c_ounces;
    //Show the results
    cout<<"You have "<<c_tons<<" tons of cereal in "<<c_ounces<<
            " ounces"<<endl;
    cout<<"And need "<<num_boxes<<" boxes to yield one ton of cereal"<<endl;
    //Ask to run it again
    cout<<"Would you like to run a different amount?\n";
    cout<<"Enter y for yes and n for no, then press return.\n";
    cin>>ans;
        }while (ans == 'y');
    cout<<"Good-bye";    
      
    
    } else
        cout << "Good-Bye\n";

    return 0;
}  


