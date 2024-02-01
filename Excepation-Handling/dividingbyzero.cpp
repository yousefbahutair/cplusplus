#include <iostream>
using namespace std;

int main() {
    float dividend, divisor, quotient;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    if (divisor != 0) {
        quotient = dividend / divisor;
        cout << "Quotient: " << quotient << endl;
    } else {
        cout << "Error: Division by zero is undefined!" << endl;
    }

    return 0;
}