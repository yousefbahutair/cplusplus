#include <iostream>

int main() {
    try {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            throw "Division by zero detected!";
        }

        int result = numerator / denominator;
        std::cout << "Result of division: " << result << std::endl;
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }

    return 0;
}