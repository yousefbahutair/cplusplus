#include <iostream>

int factorial(int n);

int main() {
    int x = 5;
    int result = factorial(x);
    std::cout << "Factorial: " << result << std::endl;
    return 0;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}