#include<iostream>
#include <unordered_map>

int fibonacci(int n, std::unordered_map<int, int>& memo) {
    if (n <= 1)
        return n;
    else if (memo.find(n) != memo.end())
        return memo[n];
    else {
        int fib = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
        memo[n] = fib;
        return fib;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::unordered_map<int, int> memo;
    int result = fibonacci(n, memo);
    std::cout << "Fibonacci number at position " << n << " is " << result;
    return 0;
}
