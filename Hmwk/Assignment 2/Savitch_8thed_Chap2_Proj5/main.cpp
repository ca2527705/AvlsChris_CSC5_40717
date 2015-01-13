/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *Purpose: Loan calculations
 * Created on January 12, 2015, 6:58 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin calculation here
int main(int argc, char** argv) {
    //Decalre variables
    float int_rate, durofln, cstamt, mthypay,totamt;
    
    cout<<"Enter the amount of money wanted, the interest rate, "
            <<"and the length of the loan period in years.\n";
    cin>>cstamt;
    cin>>int_rate;
    cin>>durofln;
    
    totamt=(cstamt*(int_rate/100))*durofln+cstamt;
    mthypay=totamt/(durofln*12);
    
    cout<<"Your total cost will be $"<<totamt<<endl;
    cout<<"And your total monthly amount will be $ "<<mthypay<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"would you like to repeat the calculation?"<<endl;
    cout<<"Enter the amount if so, if not enter 0"<<endl;
    char answer;
    cin>>answer;
    
    do 
    {
            cout<<"Enter the amount of money wanted, the interest rate, "
            <<"and the length of the loan period in years.\n";
            cin>>cstamt;
            cin>>int_rate;
            cin>>durofln;
    
        totamt=(cstamt*(int_rate/100))*durofln+cstamt;
        mthypay=totamt/(durofln*12);
    
        cout<<"Your total cost will be "<<totamt<<" $"<<endl;
        cout<<mthypay;
        
    } while (answer>0);
    cout<<"Goodbye"<<endl;
        
    
    return 0;
}

