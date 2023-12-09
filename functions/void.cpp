#include <iostream>
void findMaximum(int a, int b) {
    int max = (a > b) ? a : b;
    std::cout << "The maximum of " << a << " and " << b << " is: " << max << std::endl;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    findMaximum(num1, num2);

    return 0;
}