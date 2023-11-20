#include <iostream>

using namespace std;

int main()
{
    int school_years[]{100,200,300};
    cout << "your school year is " << school_years[2];
    cout << "/nEnter your real school year";
    cin >> school_years[2];
     cout << "your school year is " << school_years[2];

    return 0;
}