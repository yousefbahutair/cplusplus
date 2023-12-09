#include <iostream>
#include <string>
using namespace std;

int main() {
    string d {"When creating a slide deck, most of the time should be spent on your content and message. A PowerPoint presentation’s visual aid is only as good as how much it empowers the presenter’s message. Based on this premise, our PowerPoint templates are created to help you save time creating your presentation decks. You can focus on your message while our designers generate the slideshow templates most suitable for the scenario you need."};
    string word;
    
    cout << d << endl;
    
    size_t position;
    
    do {
        cout << "Enter word to find: ";
        cin >> word;
        position = d.find(word);
        if (position == string::npos) {
            cout << "not found" << endl;
        }
        else {
            cout << "Your word is at position " << position << endl;
        }
    } while (position == string::npos);
    return 0;
}