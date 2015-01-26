/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 26, 2015, 10:05 AM
 */
//system libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Function Prototypes

/*
 * 
 */
int main(int argc, char** argv) {
    //Initialize he random number seed
    srandom(static_cast<unsigned int>(time(0)));
    //declare two variables
    unsigned int x,y,begTim,endTim,ans;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"What is "<<x<<" + "<<y<<endl;
    cout<<"You have 5 seconds to answer"<<endl;
    cout<<"Wait for the next prompt"<<endl;
    do{
        endTim=static_cast<unsigned int>(time(0));\
    }while(endTim-begTim<5);
        cout<<"You answer is?"<<endl;
        cin>>ans;
    //Determine if correct
        if(ans==(x+y))cout<<"You are correct"<<endl;
        else cout<<"You are wrong"<<endl;
    //Exit stage right
    return 0;
}

