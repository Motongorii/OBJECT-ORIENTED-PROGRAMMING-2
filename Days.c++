#include <iostream>
using namespace std;

int main() {
    do
    {
        int day;
    cout << "DAY OF THE WEEK DETAILS \n ";
    cout<<"\t|     |\n";
    cout<<"Please enter the number of the weekday (1-7):";
    
    cin >> day;
    switch (day) {
        case 1:
            cout << "This Weekday is Monday" << endl;
            break;
        case 2:
            cout << "This Weekday is Tuesday" << endl;
            break;
        case 3:
            cout << "This Weekday is Wednesday" << endl;
            break;
        case 4:
            cout << "This Weekday is Thursday" << endl;
            break;
        case 5:
            cout << "This Weekday is Friday" << endl;
            break;
        case 6:
            cout << "This Weekday is Saturday" << endl;
            break;
        case 7:
            cout << "This Weekday is Sunday" << endl;
            break;
        default:
            cout << "Invalid input! You have entered a wrong choice" << endl;
    }

    } while (true);
    
    
    return 0;
}