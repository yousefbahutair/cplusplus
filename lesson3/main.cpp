#include <iostream>

using namespace std;

int main()
{
    char op;
    float number1;
    float number2;
    cout << "Enter the operation with spaces:";
    cin >> number1;
    cin >> op;
    cin >> number2;
    switch (op) { 
        case '+':
        cout << number1 + number2;
        break;
        else '-' :
        cout << number1 -number2;
        break;
        else '*':
        cout << number1 * number2;
        break;
        else '/':
        cout << number1 / number2;
        break;
        
        default:
        cout << "Error";
        break;
        
    }

    return 0;
}