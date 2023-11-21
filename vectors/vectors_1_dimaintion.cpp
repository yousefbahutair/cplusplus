#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> moon_years(3)
    vector <int> moon_years(3){10000,572,700}
    cout << " Our moon born in" moon_years[0] << "bc"<< endl;
    cout << "and it split into two halves in" << moon_years[1] << "AD" << endl;
    cout << "And now it looks like it does today since "  << moon_years(2) <<  "AD" << endl;
    cout << "there are" << moon_years.size() << "years in victor" << endl;

    vector <int> moon_years(3)// another way
    vector <int> moon_years(3){10000,572,700}
    cout << " Our moon born in" moon_years.at(0) << "bc"<< endl;
    cout << "and it split into two halves in" << moon_years.at(1) << "AD" << endl;
    cout << "And now it looks like it does today since "  << moon_years.at(2) << "AD" ;
    cout << "if you wnat o change the years enter 3 years"
    cin >> moons_years[0]
    cin >> moons_years[1]
    cin>> moons_years[2]
    cout <<"new context:"<< endl;
    cout << " Our moon born in" moon_years[0] << "bc"<< endl;
    cout << "and it split into two halves in" << moon_years[1] << "AD" << endl;
    cout << "And now it looks like it does today since "  << moon_years(2) <<  "AD" << endl;
    cout << "there are" << moon_years.size() << "years in victor" << endl;
    cout << " type new years if ou want to add new years" << endl;
    int new_years
    cout << "type the first year:"<< endl;
    cin >> new_years;
    moon_years.push_back(new_years);
    cout << "type another year:" << endl;
    cin << new_years;
    moon_years.push_back(new_years);
    cout << " Our moon born in" moon_years[0] << "bc"<< endl;
    cout << "and it split into two halves in" << moon_years[1] << "AD" << endl;
    cout << "And now it looks like it does in"  << moon_years(2) <<  "AD" << endl;
    cout << "And it became more acssessable to people since technogoly improved in" << moon_years[3] << "AD" << endl;
    cout << " most of people now live in moon since " << moon_years[4] << "AD" << endl;
    cout << "there are" << moon_years.size() << "years in victor" << endl;
    cout << " type new years if ou want to add new years" << endl;


    return 0;
}