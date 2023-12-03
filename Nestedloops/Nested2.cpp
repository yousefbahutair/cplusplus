#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number_sub;
    cout << "How many subjects do you have? ";
    cin >> number_sub;

    vector<int> scores(number_sub);
    for(int i=0; i< number_sub; ++i) {
        cout << "Enter score for subject " << i+1 << ": ";
        cin >> scores[i];
    }
    cout << "Your histogram:"<< endl;

    for(auto score : scores) {
        for( int i{1}; i<= score; ++i) {
            if( i%5 ==0)
                cout << "/";
            else
                cout << "-";
        }
        cout << endl;
    }

    return 0;
}