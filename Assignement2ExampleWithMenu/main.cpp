/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Menu Example
 * Created on January 14, 2015, 10:27 AM
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6;//Grams per pound
const int CNVHRMN=60;//Conversion from Hrs to Mins
const int CNVMNSC=60;//Conversion from Min to Secs


//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    int choice;
    do{
        //Assignment 2 menu
        cout<<"Solution 1 Savitch 8thEd Chap 2 Prob 2"<<endl;
        cout<<"Solution 2 Savitch 8thEd Chap 2 Prob 3"<<endl;
        cout<<"Solution 3 Savitch 9thEd Chap 5 Prob 7"<<endl;
        cout<<"You get the idea"<<endl;
        cout<<"Input which solution you would like to see"<<endl;
        cin>>choice;
        //Based upon the choice, display the results   
        switch(choice){
            case 1:{
                cout<< "You have choose Solution 1"<<endl;
                    //Declare variables
                    const float CONC=1e-3f;//Sweetener concentration
                    float wtCoke=3.5e2f;//Weight of coke in grams
                    float kmouse=5.0f;//Quantity of sweetener that kills a mouse
                    float wtMouse=3.5e1f;//Wt of mouse in grams
                    float kPer,wtDsPer;
                    int nCans;
                    //Input the desire wt of person
                    cout<<"Input your desired weight in pounds"<<endl;
                    cout<<"Format the input as a float"<<endl;
                    cin>>wtDsPer;
                    wtDsPer*=CNVLBGM;//Convert to grams
                    //Calculation
                    kPer=kmouse/wtMouse*wtDsPer;
                    nCans=kPer/wtCoke/CONC;
                    //output the limit of what you can drink
                    cout<<"Number of can of diet coke ";
                    cout<<"that will kill you = "<<nCans<<endl;
                    //Exit stage right!
                break;
            }
            case 2:{
                cout<<"You have choose Solution 2"<<endl;
                //Declare variables
                float mph;//Miles per hour on a treadmill
                float hpm;//Pace as hours per mile
                float fmpm;//Miles per minute as a float
                int impm;//Miles per minute as an integer
                float fmspm;//Fraction left for seconds per mile
                //Prompt for the input
                cout<<"How many miles are you running"<<endl;
                cout<<"in an hour?"<<endl;
                cout<<"Format answer as a float."<<endl;
                cin>>mph;
                //Calculate the relevant pace
                hpm=1/mph;
                fmpm=hpm*CNVHRMN;
                impm=static_cast<int>(fmpm);
                fmspm=(fmpm-impm)*CNVMNSC;
                //Output the result
                cout<<mph<<" (mph) = ";
                cout<<impm<<" (mins) ";
                cout<<fmspm<<" (secs) per mile"<<endl;
                //Exit stage right
                break;
            }
            case 3:{
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
                    break;
            }
            default: cout<<"You choose to exit"<<endl;
        }
} (while{choice>=1&&choice<=3));

return 0;
}
