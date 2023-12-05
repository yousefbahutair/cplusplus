#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char intro[20000]{};
    cout << "Introduce yourself:";
    cin.getline(intro, 20000);
    cout << "Cool! ";
    return 0;
}