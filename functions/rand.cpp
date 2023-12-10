#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main()
{
    int num1;
    int num2;
    cout << "Enter to numbers and we'll show you 6 random numbers between them: ";
    cin >> num1 >> num2;
    srand(time(0));
     for( int i; i<6; i++)
     {
         cout << num1 + rand()%(num2-num1+1) << endl;
     }
        
    return 0;
}