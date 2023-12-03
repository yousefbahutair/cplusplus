#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number_sub;
    cout << "How many subjects do you have? ";
    cin >> number_sub;

    vector<int> scores(number_sub);
    for(int i=0; i<number_sub; ++i) {
        cout << "Enter score for subject " << i+1 << ": ";
        cin >> scores[i];
    }

    for(auto score : scores)
        cout << score << " ";

    return 0;
}
