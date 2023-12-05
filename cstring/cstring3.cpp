#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char intro[20000]{};
    cout << "Introduce yourself: ";
    cin.getline(intro, 20000);
    for( size_t i=0; i< strlen(intro); i++){
        if (isalpha(intro[i])){
            intro[i] = toupper(intro[i]);
        }
    }
    cout << intro;
    return 0;
}