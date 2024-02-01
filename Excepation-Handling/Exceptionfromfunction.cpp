#include <iostream>

using namespace std;

int calculateSquareRoot(int num) {
    if (num < 0) {
        throw "Cannot calculate square root of a negative number!";
    }
    
    return sqrt(num);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    try {
        int result = calculateSquareRoot(number);
        cout << "Square root of " << number << " is: " << result << endl;
    }
    catch (const char* errorMessage) {
        cerr << "Error: " << errorMessage << endl;
    }

    return 0;
}