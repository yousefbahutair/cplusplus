#include <iostream>
using namespace std;

class DivideByZeroException : public exception {
public:
    const char* what() const throw() {
        return "Divide by zero exception";
    }
};

class NegativeNumberException : public exception {
public:
    const char* what() const throw() {
        return "Negative number exception";
    }
};

int divide(int a, int b) {
    if (b == 0) {
        throw DivideByZeroException();
    }
    if (a < 0 || b < 0) {
        throw NegativeNumberException();
    }
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0) << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
    
    try {
        cout << divide(-5, 2) << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}