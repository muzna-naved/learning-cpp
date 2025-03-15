// A program that changes a given amount of money into smaller
// monetary units.

#include <iostream>

using namespace std;

int main() {
    double amount;
    cout << "Enter an amount : ";
    cin >> amount;
    amount=amount*100;
    int new_amount = (int)amount;  
    int dollars = new_amount / 100;
    new_amount%= 100;
    int quarters = new_amount / 25;
    new_amount %= 25;
    int dimes = new_amount / 10;
    new_amount %= 10;
    int nickels = new_amount / 5;
    new_amount %= 5;
    int pennies = new_amount; 
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    return 0;
}
