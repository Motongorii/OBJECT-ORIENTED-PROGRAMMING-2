#include <iostream>

using namespace std;

int main()
{
    int marks;
    

    do {
        cout << "Enter student's mark: ";
        cin >> marks;

        if (marks < 0 || marks > 100) {
            cout << "Invalid entry" << endl;
        } else {
            int category = 0;
            if (marks >= 90 && marks <= 100) category = 1;
            else if (marks >= 80 && marks <= 89) category = 2;
            else if (marks >= 70 && marks <= 79) category = 3;
            else if (marks >= 60 && marks <= 69) category = 4;

            switch (category) {
                case 1:
                    cout << "YOU SCORE AN: A" << endl;
                    break;
                case 2:
                    cout << "YOU SCORE IS: B" << endl;
                    break;
                case 3:
                    cout << "YOUR SCORE IS:C" << endl;
                    break;
                    case 4:
                    cout << "YOUR SCORE IS: D" << endl;
                default:
                    cout << "Fail" << endl;
                    break;
            }
        }


    } while (true);

    return 0;
}