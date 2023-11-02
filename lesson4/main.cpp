#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << " This is a Poll press enter to vote";
    cout << " Enter your age to see if you are old enough to vote"; 
    cin >> age;
    if  (age < 18 ) 
        cout << " You are not old enough";
    if (age >= 18) 
        cout<< " you are old enough to vote :) ";
    return 0;
}