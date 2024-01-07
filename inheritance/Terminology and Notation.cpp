```cpp
#include <iostream>
#include <map>
using namespace std;

class Terminology {
    map<string, string> terminologyMap;

public:
    void addTerm(string term, string definition) {
        terminologyMap[term] = definition;
    }

    string getDefinition(string term) {
        if (terminologyMap.find(term) != terminologyMap.end()) {
            return terminologyMap[term];
        }
        else {
            return "Term not found.";
        }
    }
};

int main() {
    Terminology terminology;

    terminology.addTerm("API", "Application Programming Interface");
    terminology.addTerm("HTML", "Hypertext Markup Language");
    terminology.addTerm("CSS", "Cascading Style Sheets");
    terminology.addTerm("URL", "Uniform Resource Locator");

    cout << terminology.getDefinition("API") << endl;   // Output: Application Programming Interface
    cout << terminology.getDefinition("CSS") << endl;   // Output: Cascading Style Sheets
    cout << terminology.getDefinition("Python") << endl; // Output: Term not found.

    return 0;
}