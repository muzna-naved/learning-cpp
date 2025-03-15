// A program that determines whether every digit of a given positive integer is
// odd. Print true if the number consists entirely of odd digits (1, 3, 5, 7, 9) and false if any of its digits are
// even (0, 2, 4, 6, 8).

#include <iostream>

using namespace std;

int main() {

    int i,num;
    bool odd;
    cout<<"Enter Number:\t";
    cin>>num;

    while(num>0){
        int n=num%10;
        if(n%2==0){
            odd=false;
            break;
        }
        else{
            odd=true;
            num=num/10;
        }
    }
    if(odd){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
return 0;
}