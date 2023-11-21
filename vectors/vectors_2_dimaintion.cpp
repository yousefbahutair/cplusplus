#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> buyers {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << "1 percent of buyers rate the product: " << buyers[0][0] << endl;
    cout << "9 percent of buyers rate the product: " << buyers[0][1] << endl;  
    cout << "10 percent of buyers rate the product: " << buyers[0][2] << endl;  
    cout << "20 percent of buyers rate the product: " << buyers[1][0] << endl;  
    cout << "20 percent of buyers rate the product: " << buyers[1][1] << endl;  
    cout << "10 percent of buyers rate the product: " << buyers[1][2] << endl;  
    cout << "15 percent of buyers rate the product: " << buyers[2][0] << endl;  
    cout << "7.5 percent of buyers rate the product: " << buyers[2][1] << endl;
    cout << "7.5 percent of buyers rate the product: " << buyers[2][2] << endl;
    cout << "There are " << buyers.size() << " percentages." << endl;

     int your_rating;
     cout << "Enter your rating out of 10:" << endl;
     cin >> your_rating;
     buyers.push_back(vector<int>{your_rating});
     cout << "New ratings: " << endl;
     cout << "1 percent of buyers rate the product: " << buyers[0][0] << endl;
    cout << "9 percent of buyers rate the product: " << buyers[0][1] << endl;  
    cout << "10 percent of buyers rate the product: " << buyers[0][2] << endl;  
    cout << "20 percent of buyers rate the product: " << buyers[1][0] << endl;  
    cout << "20 percent of buyers rate the product: " << buyers[1][1] << endl;  
    cout << "10 percent of buyers rate the product: " << buyers[1][2] << endl;  
    cout << "15 percent of buyers rate the product: " << buyers[2][0] << endl;  
    cout << "7.5 percent of buyers rate the product: " << buyers[2][1] << endl;
    cout << "7.5 percent of buyers rate the product: " << buyers[2][2] << endl;
    cout << "Your rating: " << your_rating << endl;
    cout << "There are " << buyers.size() << " percentages." << endl;
 
   return 0;
}