#include <iostream>
#include <vector>
using namespace std;

int main()

{double total_dgree;
double all_dgrees;
 vector<double> dgrees{90,95,100,98,75.99,100,98};
for( auto dgree: dgrees)
all_dgrees += dgree;
total_dgree= all_dgrees/ dgrees.size();{};
cout << total_dgree << endl;


            
    return 0;
}