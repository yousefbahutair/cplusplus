#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word1[20000]{};
    char word2[20000]{};
    cout << "Enter 2 words and we'll see if they are the same or not...\n";
    cout << "First word: ";
    cin >> word1;
    cout << "Second word: ";
    cin >> word2;
    int i= strcmp(word1, word2);
    if(i == 0)
        cout << "Yes, they are the same";
    else
        cout << "No, they're not";
    return 0;
}