#include <iostream>
using namespace std;

int main() {
    int number;
    do {
        cout << "Enter a number less than 100 and we'll tell you whether it's odd or even: " << endl;
        cin >> number;
        if (number <= 100) {
            if (number % 2 == 0) {
                cout << "Even" << endl;
            } else {
                cout << "Odd" << endl;
            }
        } else {
            cout << "Try again." << endl;
        }
    } while (number > 100);
    
    return 0;
}