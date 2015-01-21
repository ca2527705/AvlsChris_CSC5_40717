/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Purpose: Credit card statement
 * Created on January 17, 2015, 11:16 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Define the variables
    float accbal, intrat, totdue, minpay;
    //Ask for the input
    cout<<"Enter the account balance"<<endl;
    cin>>accbal;
    
    
    //multiply the interest rate by the account balance for the interest due
    if (accbal <= 1000)
        intrat=accbal*.015;
    else
        intrat=accbal*.01;
    //The total due is the top section added to the original balance
    if (accbal <= 1000){
        totdue=accbal*.015+accbal;}
    else{
        totdue=accbal*.01+accbal;}
    //Min payment is a bit trickey since theres three options
    minpay=totdue*.1;
    //if the minpay is greater then 10 dollars
    if (minpay>=10)
        minpay=minpay;
    //if the minpay is less then the amount owed total, means it only works 
    //when you are about to close the balance
    else if (totdue<=10)
        minpay=totdue;
    //if the minpay is not going to be closed soon but they still want some
    //money
    else (minpay=10);
    //show the results
    cout<<"Your interest due is $"<<intrat<<endl;
    cout<<"Your total due is $"<<totdue<<endl;
    cout<<"Your minimum payment is $"<<minpay<<endl;
    //Ask to run it again
    cout<<"Would you like to run another amount?"<<endl;
    cout<<"Enter Y for yes and N for no, followed by pressing enter\n";
    char answer;
    cin>>answer;
    while ((answer == 'Y')||(answer == 'y'))
    {
        //Ask for the input
        cout<<"Enter the account balance"<<endl;
        cin>>accbal;
        //multiply the interest rate by the account balance for the interest due
        if (accbal <= 1000)
            intrat=accbal*.015;
        else
            intrat=accbal*.01;
        //The total due is the top section added to the original balance
        if (accbal <= 1000){
            totdue=accbal*.015+accbal;}
        else{
            totdue=accbal*.01+accbal;}
        //Min payment is a bit trickey since theres three options
        minpay=totdue*.1;
        //if the minpay is greater then 10 dollars
        if (minpay>=10)
            minpay=minpay;
        //if the minpay is less then the amount owed total, means it only works 
        //when you are about to close the balance
        else if (totdue<=10)
            minpay=totdue;
        //if the minpay is not going to be closed soon but they still want some
        //money
        else (minpay=10);
        //show the results
        cout<<"Your interest due is $"<<intrat<<endl;
        cout<<"Your total due is $"<<totdue<<endl;
        cout<<"Your minimum payment is $"<<minpay<<endl;
        //Ask to run it again
        cout<<"Would you like to run another amount?"<<endl;
        cin>>answer;
    }
    cout<<"Goodbye"<<endl;

    return 0;
}

