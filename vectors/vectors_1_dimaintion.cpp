#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> moon_years(3);
    vector<int> moon_years2{10000, 572, 700};
    cout << "Our moon was born in " << moon_years2[0] << " BC" << endl;
    cout << "and it split into two halves in " << moon_years2[1] << " AD" << endl;
    cout << "And now it looks like it does today since " << moon_years2[2] << " AD" << endl;
    cout << "There are " << moon_years2.size() << " years in the vector" << endl;

    vector<int> moon_years3(3);
    vector<int> moon_years4{10000, 572, 700};
    cout << "Our moon was born in " << moon_years4.at(0) << " BC" << endl;
    cout << "and it split into two halves in " << moon_years4.at(1) << " AD" << endl;
    cout << "And now it looks like it does today since " << moon_years4.at(2) << " AD" << endl;
    cout << "If you want to change the years, enter 3 years:" << endl;
    cin >> moon_years[0];
    cin >> moon_years[1];
    cin >> moon_years[2];
    cout << "New context:" << endl;
    cout << "Our moon was born in " << moon_years[0] << " BC" << endl;
    cout << "and it split into two halves in " << moon_years[1] << " AD" << endl;
    cout << "And now it looks like it does today since " << moon_years[2] << " AD" << endl;
    cout << "There are " << moon_years.size() << " years in the vector" << endl;
    cout << "Type new years if you want to add new years" << endl;
    int new_years;
    cout << "Type the first year:" << endl;
    cin >> new_years;
    moon_years.push_back(new_years);
    cout << "Type another year:" << endl;
    cin >> new_years;
    moon_years.push_back(new_years);
    cout << "Our moon was born in " << moon_years[0] << " BC" << endl;
    cout << "and it split into two halves in " << moon_years[1] << " AD" << endl;
    cout << "And now it looks like it does in " << moon_years[2] << " AD" << endl;
    cout << "And it became more accessible to people since technology improved in " << moon_years[3] << " AD" << endl;
    cout << "Most people now live on the moon since " << moon_years[4] << " AD" << endl;
    cout << "There are " << moon_years.size() << " years in the vector" << endl;
    cout << "Type new years if you want to add new years" << endl;

    return 0;
}