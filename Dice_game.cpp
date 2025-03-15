#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    int player1{0}, player2{0}, target, round, r1, r2, r3, r4;
    string p1, p2;
    cout << "Player 1, enter your name: ";
    cin >> p1;
    cout << "Player 2, enter your name: ";
    cin >> p2;
    cout << "Enter the target number (2-12): ";
    cin >> target;
    cout << "Target: " << target << endl;
    cout << "Enter rounds: ";
    cin >> round;
    cout << endl;
    srand(time(0));
    
    for (int i = 1; i <= round; i++) {
        r1 = 1 + rand() % 6;
        r2 = 1 + rand() % 6;
        r3 = 1 + rand() % 6;
        r4 = 1 + rand() % 6;
        cout << "____________ Round " << i << " ____________" <<endl;
        cout << p1 << " rolled a " << r1 << " and a " << r2 << "!
        Total: " << (r1 + r2) << endl;
            if (r1 + r2 == target) {
                player1++;
        }
        cout << p2 << " rolled a " << r3 << " and a " << r4 << "!Total: " << (r3 + r4) << endl;
            if (r3 + r4 == target) {
                player2++;
        }
        cout << endl;
    }   
    cout << endl << "__________ Final Scores __________" << endl;
    cout << p1 << ": " << player1 << " hit(s)" << endl;
    cout << p2 << ": " << player2 << " hit(s)" << endl;
        if (player1 > player2) {
            cout << p1 << " wins!" << endl;
        } else if (player2 > player1) {
            cout << p2 << " wins!" << endl;
        } else {
            cout << "It's a tie!" << endl;
        }
        
return 0;
}