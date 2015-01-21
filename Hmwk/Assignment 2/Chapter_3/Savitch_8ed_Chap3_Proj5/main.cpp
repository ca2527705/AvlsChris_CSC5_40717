/* 
 * File:   main.cpp
 * Author: Usatashi
 *
 * Created on January 18, 2015, 4:19 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int cost,time,length;
    char first,second;
    
    cout<<"What day did you make the call?"<<endl;
    cin>>first>>second;
    cout<<"What time did you make the call at?"<<endl;
    cin>>time;
    cout<<"How long was the call for?"<<endl;
    cin>>length;   

    if (((first=='M'))||(second=='m')&&(second=='O')||second=='o'){
        if ((time>=800)&&(time<=1800))
            cost=length*.40;
        else 
            cost=length*.25;
    }
    else if (((first=='T'))||(second=='t')&&(second=='U')||second=='u'){               
        if ((time>=800)&&(time<=1800))
            cost=length*.40;
        else 
            cost=length*.25;
    }
    else if (((first=='W'))||(second=='w')&&(second=='E')||second=='e'){               
        if ((time>=800)&&(time<=1800))
            cost=length*.40;
        else 
            cost=length*.25;
        }
    else if (((first=='T'))||(second=='t')&&(second=='h')||second=='H'){               
        if ((time>=800)&&(time<=1800))
            cost=length*.40;
        else 
            cost=length*.25;
    }
    else if (((first=='F'))||(second=='f')&&(second=='R')||second=='r'){               
        if ((time>=800)&&(time<=1800))
            cost=length*.40;
        else 
            cost=length*.25;
    }
        else if (((first=='S'))||(second=='s')&&(second=='a')||second=='A'){             
            cost=length*.15;
    }
        else if (((first=='S'))||(second=='s')&&(second=='U')||second=='u'){               
            cost=length*.15;
    }
    cout<<cost<<endl;
    
    return 0;
}

