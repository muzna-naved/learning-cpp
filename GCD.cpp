// A program that prompts the user to enter two positive integers and finds their greatest common
// divisor.

#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int num1,num2,gcd;
    cout<<"Enter first number:\n";
    cin>>num1;
    cout<<"Enter second number:\n";
    cin>>num2;
    int i=1;
    int minNum=fmin(num1,num2);
    
    while(i<= minNum){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
        i++;
    }
    cout<<"Greatest common divisor :"<<gcd;
    
    return 0;
}
