/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 27, 2015, 11:02 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int number;

    cout<<"Input a number from 1000 to 9999"<<endl;
    cin>>number;
    
    char thousands=(number-number%1000)/1000;{
    switch(thousands){
            case 9: cout<<"9 *********\n";break;
            case 8: cout<<"8 ********\n";break;
            case 7: cout<<"7 *******\n";break;
            case 6: cout<<"6 ******\n";break;
            case 5: cout<<"5 *****\n";break;
            case 4: cout<<"4 ****\n";break;
            case 3: cout<<"3 ***\n";break;
            case 2: cout<<"2 **\n";break;
            case 1:cout<<"1 *\n";break;
            default:cout<<"?\n";break;
            return 0;
    }
    number-=thousands*1000;
    char hundreds=(number-number%100)/100;
        switch(hundreds){
            case 9: cout<<"9 *********\n";break;
            case 8: cout<<"8 ********\n";break;
            case 7: cout<<"7 *******\n";break;
            case 6: cout<<"6 ******\n";break;
            case 5: cout<<"5 *****\n";break;
            case 4: cout<<"4 ****\n";break;
            case 3: cout<<"3 ***\n";break;
            case 2: cout<<"2 **\n";break;
            case 1:cout<<"1 *\n";break;
            default:cout<<"?\n";break;
            return 0;
    }
    number-=hundreds*100;
    char tens=(number-number%10)/10;
        switch(tens){
            case 9: cout<<"9 *********\n";break;
            case 8: cout<<"8 ********\n";break;
            case 7: cout<<"7 *******\n";break;
            case 6: cout<<"6 ******\n";break;
            case 5: cout<<"5 *****\n";break;
            case 4: cout<<"4 ****\n";break;
            case 3: cout<<"3 ***\n";break;
            case 2: cout<<"2 **\n";break;
            case 1:cout<<"1 *\n";break;
            default:cout<<"?\n";break;
            return 0;
        }      
    number-=tens*10;
    char ones=number;
        switch(ones){
            case 9: cout<<"9 *********\n";break;
            case 8: cout<<"8 ********\n";break;
            case 7: cout<<"7 *******\n";break;
            case 6: cout<<"6 ******\n";break;
            case 5: cout<<"5 *****\n";break;
            case 4: cout<<"4 ****\n";break;
            case 3: cout<<"3 ***\n";break;
            case 2: cout<<"2 **\n";break;
            case 1:cout<<"1 *\n";break;
            default:cout<<"?\n";break;
            return 0;
        }
        return 0;
    }
    return 0;
}

