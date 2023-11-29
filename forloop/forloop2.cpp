#include <iostream>
using namespace std;

int main()
{
    for (int num1{2}, num2{3}, result; num1 <= 10; ++num1, ++num2)
    {
        result = num1 * num2;
        if (result % 2 == 0)
            cout << result << endl;
        else
            cout << endl;
    }
            
    return 0;
}