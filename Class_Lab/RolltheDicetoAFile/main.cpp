/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 12, 2015, 10:06 AM
 * PurposeL Illustrate file i/o and random numbers
 */

//System Libraries
#include <cstdlib> //Random rand (), srand ()
#include <iostream>//Keyboardmonitor I/O
#include <fstream> //File I/O
#include <ctime>   //Time functions


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object
    ofstream output;
    //open the file
    output.open("Rollthedice.dat");
    //output 5 dice rolls
    unsigned short die1,die2,die3,die4,die5;
    //Set the Values for each dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    //Output the results
    cout<<"Yahtzee first roll => ";
    cout<<die1<<" "<<die2<<" "<<die3<<" "<<die4<<" "<<die5<<endl;
        //Output the results
    output<<"Yahtzee first roll => ";
    output<<die1<<" "<<die2<<" "<<die3<<" "<<die4<<" "<<die5<<endl;
    //Output
    //close the stream
    output.close();
    return 0;
}
