#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int fun(int n)
{    if ( n==1)
    return 1;
    else
    return fun(n-1) * n;
    
    
    
}
int main()
{ int n;
  cout << "enter a number and we will find the vactorial: ";
  cin >> n;
  cout << fun(n);
  return 0;
}