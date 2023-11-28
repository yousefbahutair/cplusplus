#include<iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    cout << "Enter 2 numbers:"<< endl;
    cin >> number1 >> number2;
    cout << "Largest number is :" << ((number1>number2)?number1:number2) << endl;
    cout << "smallest number is :" << ((number1<number2)?number1:number2) << endl;
        
    return 0;
}