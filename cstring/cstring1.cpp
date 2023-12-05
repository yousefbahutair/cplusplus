#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[100]{};
    char boy[100]{};
    char fullname[200]{};
    cout << "Enter your first name:";
    cin >> name;
    cout << "Enter your last name ";
    cin >> boy;
    strcat(fullname,name);
    strcat(fullname," ");
    strcat(fullname, boy);
    cout <<"Your fullname is: " << fullname;
   return 0;
}