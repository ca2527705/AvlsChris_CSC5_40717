/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 13, 2015, 9:15 AM
 * Purpose: Lab work
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare 2 boolean variables
    bool X,Y;

    cout<<"X Y !X!Y X&&Y X| |Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !X||!Y.\n";
    //Fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<" ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"      ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    cout<<endl;
    Y=false;
        cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<" ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"      ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    cout<<endl;
    X=false;Y=true;
        cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<" ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"      ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    cout<<endl;
    X=false;Y=false;
        cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<" ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"     ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"      ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    cout<<endl;

    //Exit Stage right!
    return 0;
}

