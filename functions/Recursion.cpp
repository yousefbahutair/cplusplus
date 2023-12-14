#include <iostream>
using namespace std;

int fb(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return n + fb(n-1);
}

int main() {
    int n;
    cout << "Write a number and we will add the numbers from one to this number : ";
    cin >> n;
    cout << fb(n);
    return 0;
}