// A program that converts a hexadecimal digit into a decimal value.

#include <iostream>

using namespace std;

int main() {

    char hexa;
    int n;
    cout<<"Enter a Hexadecimal character:";
    cin>>hexa;
    if(hexa>='0' && hexa<='9'){
        cout<<hexa;
    }
    else if(hexa>='A' && hexa<='F'){
        n=hexa-'A'+10;
        cout<<n;
    }
    else{
        cout<<"INVALID CHARACTER";
    }
    
return 0;
}