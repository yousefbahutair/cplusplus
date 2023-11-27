#include<iostream>
using namespace std;

int main()
{
    int grade;
    cout <<"Enter your score in the exam"<< endl;
    cin >> grade;
    if (grade > 90)
    { if (grade > 95)
        cout << "Your score is A+" << endl;
        else if (grade < 95)
            cout << "Your score is A" << endl;
    }
    if (grade > 80)
    { if (grade > 85)
        cout << "Your score is B+" << endl;
        else if (grade < 85)
            cout << "Your score is B" << endl;
    }
    if (grade > 70)
    { if (grade > 75)
        cout << "Your score is C+" << endl;
        else if (grade < 75)
            cout << "Your score is C" << endl;
    }
    if (grade > 60)
    { if (grade > 65)
        cout << "Your score is D+" << endl;
        else if (grade < 65)
            cout << "Your score is D" << endl;
    }
    if (grade < 60)
        cout << " Your score is F and you failed in the exam" << endl;
    return 0;
}