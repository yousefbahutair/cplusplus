#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number less than 100 and we'll tell you whether it's odd or even: " << endl;
    cin >> number;
    if (number < 100) {
        if (number % 2 == 0) {
            cout << "Even";
        } else {
            cout << "Odd";
        }
    } else {
        cout << "try again";
    }
    
    return 0;
}