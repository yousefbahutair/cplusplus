#include <iostream>
#include <cmath>

using namespace std;

int calculateSquareRoot(int num) {
    if (num < 0) {
        throw invalid_argument("Cannot calculate square root of a negative number!");
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
    catch (const invalid_argument& errorMessage) {
        cerr << "Error: " << errorMessage.what() << endl;
    }

    return 0;
}
