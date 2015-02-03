/* 
 * File:   main.cpp
 * Author: elliot
 *
 * Created on January 18, 2015, 11:55 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */


void orderN(int n){
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        if(i%3 == 0 || i%5 == 0)
            sum+=i;
    }
    
    cout << sum << endl;
}

void orderConstant(int n){
    
    n -= 1;
    int maxMultThree = n -(n%3);
    int maxMultFive = n -(n%5);
    int maxMultFifteen = n -(n%15);
    
    int numOfMultsThree = maxMultThree/3;
    int numOfMultsFive = maxMultFive/5;
    int numOfMultsFifteen = maxMultFifteen/15;
    
    int sum = ((3*numOfMultsThree*(numOfMultsThree+1)) +
    (5*numOfMultsFive*(numOfMultsFive+1)) - (15*numOfMultsFifteen*(numOfMultsFifteen+1)))/2;
    
    cout << sum << endl;
}

int main(int argc, char** argv) {
    
    orderN(1000);
    orderConstant(1000);
    
    return 0;
}

