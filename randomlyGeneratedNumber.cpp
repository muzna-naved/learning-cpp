// A program that randomly generates an integer between 0 and 100, inclusive. The program
// prompts the user to enter a number continuously until the number matches the randomly
// generated number. For each user input, the program tells the user whether the input is too low
// or too high, so the user can choose the next input intelligently.

#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
    
    int guess=0;
    int a;

    srand(time(0));
    int r=rand()%101;

    while(guess!=r){
        a++;
        cout<<"Enter your guess:"<<endl;
        cin>>guess;
        if(guess<r){
            cout<<"Too low"<<endl;
        }
        else if(guess>r){
            cout<<"Too high"<<endl;
        }
        else if(guess==r){
            cout<<"Congratulations!You guess the number in"<<a<<” turns”<<endl;
        }
    }

    return 0;
}
