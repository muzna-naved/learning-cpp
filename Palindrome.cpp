//  A program that input any number and then find out if the number is palindrome or not.

#include <iostream>

using namespace std;

int main() {
    int num,rem,reverse;
    cout<<"Enter any number:\n";
    cin>>num;
    int org=num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(org==reverse){
        cout<<"The number is palindrome.";
    }
    else{
        cout<<"The number is not palindrome.";
    }
    return 0;
}
