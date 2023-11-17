#include <iostream>

using namespace std;

int main()
{
    char large_or_small;
    int number_of_rooms;
    int number_large;
    int numbersmall;
    double small_room_per_dirhams;
    double large_room_per_dirhams;
    float sale_tax;
    cout << "Hello, welcome to RAK hotel" << endl;
    cout << "Large room per dirham is $" << large_room_per_dirhams << endl;
    cout << "Small room per dirham is $" << small_room_per_dirhams << endl;
    cout << "Sale taxes per room is $" << sale_tax << endl;
    cout << "_____________________________________" << endl;
    cout << "Would you like to take a large room or small room? (large/small/both) ";
    cin >> large_or_small;
    switch (large_or_small)
    {
        case 'l':
        case 'L':
            cout << "How many rooms do you want? ";
            cin >> number_of_rooms;
            cout << "Price for all rooms is $" << number_of_rooms * large_room_per_dirhams << endl;
            cout << "Your sales taxes is $" << number_of_rooms * large_room_per_dirhams * sale_tax << endl;
            cout << "Your total estimate is $" << (number_of_rooms * large_room_per_dirhams * sale_tax) + (number_of_rooms * large_room_per_dirhams) << endl;
            break;

        case 's':
        case 'S':
            cout << "How many rooms would you like to take? ";
            cin >> number_of_rooms;
            cout << "Price for all rooms is $" << number_of_rooms * small_room_per_dirhams << endl;
            cout << "Your taxes is $" << number_of_rooms * small_room_per_dirhams * sale_tax << endl;
            cout << "Your total estimate is $" << (number_of_rooms * small_room_per_dirhams * sale_tax) + (number_of_rooms * small_room_per_dirhams) << endl;
            break;

        case 'b':
        case 'B':
            cout << "How many large rooms do you want to take? ";
            cin >> number_large;
            cout << "And how many small rooms do you want? ";
            cin >> numbersmall;
            cout << "Price for all small and large rooms is $" << (numbersmall * small_room_per_dirhams) + (number_large * large_room_per_dirhams) << endl;
            cout << "Your taxes is $" << ((numbersmall * small_room_per_dirhams) + (number_large * large_room_per_dirhams)) * sale_tax << endl;
            cout << "Your total estimate is $" << (((numbersmall * small_room_per_dirhams) + (number_large * large_room_per_dirhams)) * sale_tax) + (numbersmall * small_room_per_dirhams) + (number_large * large_room_per_dirhams) << endl;
            break;

        default:
            cout << "Invalid input";
            break;
    }

    return 0;
}