/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Converting 24hr to 12hr
 * Created on January 27, 2015, 7:45 AM
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global constants

//Function prototypes
void time(float,float,float);
//read the military time
void conver(float);
//converts it into a 12 hr notation
void output(float,float);
//show it to them

int main(int argc, char** argv) {
    float timehr,timemin;
    char tod;
    
    time(timehr,timemin,tod);
    conver(tod);
    output(timehr,timehr);
            
   
    return 0;
}

void time(float timehr,float timemin,float tod){
    
    cout<<"Insert the hr of the day in military time\n";
    cin>>timehr;
    cout<<"Insert the time in minutes\n";
    cin>>timemin;
    cout<<"Insert if it is am or pm, use A for am and P for pm\n";
    cin>>tod;
    
    return;
}

void conver(float timehr){
    char tod;
    if (tod=='P'||tod=='p'){
        timehr=timehr-12;
    return;            
    }
}

void output(float timehr,float timemin){
    cout<<"The time is"<<timehr<<"and"<<timemin<<endl;
    return;
    
}