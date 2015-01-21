/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 *
 * Created on January 21, 2015, 8:19 AM
 */

#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
    //Set Random number seed
    srand(static_cast<unsigned int>(time(0));
    //declare a max variable
    int loop=100000;
    int max=rand();
    //Now loop to find he maximum random number
    for(int i=2;i<=loop;i++){
        int r=rand();
        if(r>max)max=r;
    }
    //Now output the result
    cout<<"2^31 = "<<MAXRAND<<endl;
    cout<<"Maximum found = "<<max<<endl;
    
    
    
    return 0;
}

