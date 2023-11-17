#include <iostream>

using namespace std;

int main()
{
    char large_or_small;
    int number_of_rooms{0};
    int number_large{0};
    int numbersmall{0};
   double small_room_per_dirhams{25};
   double large_room_per_dirhams{35};
   float sale_tax{0.06};
   cout << "Hello, welcomme to RAK hotel";
   cout << "large room per dirham is $" << large_room_per_dirhams;
   cout << "/nsmall room per dirham is $" << small_room_per_dirhams;
   cout << "/nsale taxes per room is $" << sale_tax;
   cout << "_____________________________________";
   cout << "/nWould you like to take a large room or small room?(large/small/both)";
   cin >> large_or_small;
   switch (large_or_small)
   {case "large" :
   cout << "How many rooms do you want?";
   cin >> number_of_rooms;
   cout << "Price for all rooms is $" << number_of_rooms * 35 << endl;
   cout << "Your sales taxes is $" << number_of_rooms * 35 * 0.06 << endl;
   cout << "your total estimate is $" << (number_of_rooms * 35 * 0.06) + (number_of_rooms * 35) << endl;
   break;
   case "small":
   cout << "How many rooms would you like to take?";
   cin >> number_of_rooms;
   cout << "Price for all rooms is $" << number_of_rooms * 25 << endl;
   cout << "Your taxes is $" << number_of_rooms * 25 * 0.06 << endl;
   cout << "Your total estimate is $" << (number_of_rooms * 25 * 0.06) + (number_of_rooms * 25) << endl;
   break;
   case "both" :
   cout << " How many large room do you want to take?";
   cin >> numbersmall;
   cout << "And how many small rooms you want?";
   cin >> number_large;
   cout << " Price for all small and large rooms is $" << (numbersmall * 25) + (number_large * 35) << endl;
   cout << "Your taxes is $" << ((numbersmall * 25) + (number_large * 35)) * 0.06 << endl;
   cout << "Your total estimate is $" << (((numbersmall * 25) + (number_large * 35)) * 0.06) + (numbersmall * 25) + (number_large * 35) << endl;
   break;
     default:
    cout << "Invalid input";


   }
    return 0;
}