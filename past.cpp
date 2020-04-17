#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter the year: ";
    cin >> year;

    switch (year%4 && year%100 && year%400){
        case 0:
            cout << year << " is a leap year" << endl;
            break;
        default:
            cout << year << " is not a leap year" << endl;
            break;
    }
}
