// display the given five digit number is palindrome or
// not.

#include <iostream>

using namespace std;

int main() {
   int num;
   cout<<"Enter 5 digit number:"<<endl;
   cin>>num;
   int d1=num%10;
   num= num/10;
   int d2= num%10;
   num=num/10;
   int  d3= num%10;
   num=num/10;
   int  d4= num%10;
   num=num/10;
   int  d5= num%10;
   num=num/10;
   if (d1 == d5 && d2 == d4) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
   return 0;
}
