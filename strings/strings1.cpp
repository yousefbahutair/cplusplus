#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string fname;
    
    cout << "Enter both your name and your friend's name..";
    cout <<"\nAnd we will compare between the number of letters";
    cout << "\nYour name: ";
    cin >> name;
    cout << "Your friend's name: ";
    cin >> fname;
    
    if (name.length() > fname.length())
        cout << "Your name has more letters than your friend's name by " << name.length() - fname.length() << " letters." << endl;
    else if (name.length() < fname.length())
        cout << "Your name has fewer letters than your friend's name by " << fname.length() - name.length() << " letters." << endl;
    else
        cout << "Your name has the same number of letters as your friend's name." << endl;
        
    return 0;
}