#include <iostream>

using namespace std;

int main()
{
    int born_year;
    cout << "I will calculate your age" << endl;
    cout << "Enter Your year of birth: ";
    cin >> born_year;
    int current_year;
    cout << "Enter the current year"  << endl;
    cin >> current_year;
 int total = current_year - born_year;
  cout  << current_year << "-" << born_year << "=" << total;
 
 
    

    return 0;
}