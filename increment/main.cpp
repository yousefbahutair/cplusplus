#include <iostream>

using namespace std;

int main()
{
    int revenues{6};
    int benfits{5};
    revenues = benfits;
    cout << "benfits are : " << benfits << endl;
    cout << " revenues are:" << revenues << endl;
    revenues = ++benfits;
    cout << "benfits are : " << benfits << endl;
    cout << " revenues are:" << revenues << endl;
    revenues = benfits++;
    cout << "benfits are : " << benfits << endl;
    cout << " revenues are:" << revenues << endl;
    revenues = ++benfits +7;
    cout << "benfits are : " << benfits << endl;
    cout << " revenues are:" << revenues << endl;
    revenues = benfits++ + 7;
    cout << "benfits are : " << benfits << endl;
    cout << " revenues are:" << revenues << endl;

    return 0;
}