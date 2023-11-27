#include<iostream>
using namespace std;

int main()
{
    string answer;
    cout << "Are you a vegetarian?!: " << endl;
    cin >> answer;
    if (answer == "Yes" || answer == "yes" || answer == "YES")
    {
        cout << "You should eat a Big Mac" << endl;
    }
    else if (answer == "NO" || answer == "No" || answer == "no")
    {
        cout << "Fine" << endl;
    }
    else
    {
        cout << "Error, please try again" << endl;
    }
    
    return 0;
}