/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 30, 2015, 9:04 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

//user libraries

//global constants

//function prototypes

using namespace std;


int main(int argc, char** argv) {
    //Mostly variables involving dice rolls and the random generator
    short pow,def,attk,tohit;
    int roll1=(rand()%6)+1;
    int roll2=(rand()%6)+1;
    tohit=roll1+roll2+attk;
    srand(time(0));
    //Creating the warcaster
    cout<<"Would you like to roll randomly for your stats or assign your own?\n";
    cout<<"Enter either Y for yes, or n to input your own\n";
    char answer;
    cin>>answer;
    if (answer=='Y'||answer=='y'){
        cout<<"The following will roll to see what kind of stats you have"<<endl;
        pow=(rand()%3)+11;
        def=(rand()%3)+14;
        attk=(rand()%3)+6;
        cout<<"Your Attack modifier is "<<attk<<endl;       
        cout<<"Your Defense is "<<def<<endl;
        cout<<"Your Pow is "<<pow<<endl;
    }else{
        cout<<"Please input your desired stats as requested\n";
        cout<<"For your pow, enter a number between 10 and 16\n";
        cin>>pow;
        if (pow<10&&pow>16){
            cout<<"Input a number between 10 and 16\n";
        }
    do{
        cout<<"Please input your desired stats as requested\n";
        cout<<"For your pow, enter a number between 10 and 16\n";
        cin>>pow;
        while (pow<10||pow>15){
            cout<<"Input a number between or equal to 10 and 16\n";
            cin>>pow; 
        }
        cout<<"For your def, enter a number between or equal to 14 and 16\n";
        cin>>def;
        while (def<14||def>16){
            cout<<"Input a number between 14 and 16\n";
            cin>>def;
        }
        cout<<"For your Attk, enter a number between or equal to 7 and 9\n";
        cin>>attk;
        while (attk<7||attk>9){
            cout<<"Input a number between or equal to 7 and 9\n";
            cin>>attk;
        }
        cout<<"These are your choosen stats: "<<endl;
        cout<<"Your Pow is "<<pow<<endl;
        cout<<"Your Def is "<<def<<endl;
        cout<<"Your Attk is "<<attk<<endl;
        cout<<"Are you okay with these stats?"<<endl;
        cout<<"Enter Y to accept and N to enter new stats"<<endl;
        cin>>answer;
    }while (answer=='n'||answer=='N');
        
        
        
    }

    return 0;
}

