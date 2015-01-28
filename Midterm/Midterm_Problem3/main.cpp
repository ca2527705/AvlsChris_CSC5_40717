/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 28, 2015, 8:55 AM
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    unsigned short pin,intbal,totdeb,totcred;
    short newbal;
    string pin1;
    cout<<"Input your pin\n";
    cin>>pin;
    pin1=pin;
        if ((pin>=1000)&&(pin<10000)){
            cout<<"Input your initial balance\n";
            cin>>intbal;
            cout<<"Input the amount charged\n";
            cin>>totdeb;
            cout<<"Input the amount added to credit\n";
            cin>>totcred;

            newbal=(intbal-totdeb)+totcred;

            if (newbal<0){
                cout<<"You have overdrawn, a charge of $28.85 has been added to "
                        "your account\n";
                cout<<"Your balance stands at $"<<newbal-28.25<<endl;
            }else
            cout<<"Your balance stands at $"<<newbal<<endl;
    }else
    cout<<"Improper pin number\n";
    
    return 0;
}

