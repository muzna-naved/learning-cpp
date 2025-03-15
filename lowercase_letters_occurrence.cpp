// A program that generate 100 lowercase letters randomly and assign to an array of characters.
// Count the occurrence of each letter in the array.

#include <iostream>
#include<array>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

    array<char,100>lowerCase;

    srand(time(0));
    cout<<"Generated letters:";

    for(size_t i{0};i<lowerCase.size();i++){
        lowerCase[i] = 97 + rand()%26;
        cout<<lowerCase[i];
    }

    for(char ch='a';ch<='z';ch++){
        int a=0;

        for(int j=0;j<100;j++){
            if(lowerCase[j]==ch){
                a++;
            }
        }
        
    cout<<ch<<":"<<a<<endl;
    }

return 0;
}