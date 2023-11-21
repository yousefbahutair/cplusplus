#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector <vector<int>> buyers {
        {1,2,3}
        {4,5,6}
        {7,8,9}
    }
    cout << "1 percent of buyers rate the product" << buyers[0][0] << endl;
    cout << "9 percent of buyers rate the product" << buyers[0][1] << endl;  
    cout << "10 percent of buyers rate the product" << buyers[0][2] << endl;  
    cout << "20 percent of buyers rate the product" << buyers[1][0] << endl;  
    cout << "20 percent of buyers rate the product" << buyers[1][1] << endl;  
    cout << "10 percent of buyers rate the product" << buyers[1][2] << endl;  
    cout << "15 percent of buyers rate the product" << buyers[2][0] << endl;  
    cout << "7.5 percent of buyers rate the product" << buyers[2][1] << endl;
    cout << "7.5 percent of buyers rate the product" << buyers[2][2] << endl;
    cout << "There are" << buyers.size() << " of percentage" << endl;

     int your_rating
     cout << "enter your rating out of 10:" << endl;
     cin >> your rating;
     buyers.push_back(your_rating);
     cout << "new ratings: " endl;
     cout << "1 percent of buyers rate the product" << buyers[0][0] << endl;
    cout << "9 percent of buyers rate the product" << buyers[0][1] << endl;  
    cout << "10 percent of buyers rate the product" << buyers[0][2] << endl;  
    cout << "20 percent of buyers rate the product" << buyers[1][0] << endl;  
    cout << "20 percent of buyers rate the product" << buyers[1][1] << endl;  
    cout << "10 percent of buyers rate the product" << buyers[1][2] << endl;  
    cout << "15 percent of buyers rate the product" << buyers[2][0] << endl;  
    cout << "7.5 percent of buyers rate the product" << buyers[2][1] << endl;
    cout << "7.5 percent of buyers rate the product" << buyers[2][2] << endl;
    cout << "your rating :" << your_rating << endl;
    cout << "There are" << buyers.size() << " of percentage" << endl;


 
   return 0;
}