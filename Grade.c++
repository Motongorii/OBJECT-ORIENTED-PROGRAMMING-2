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
            if (marks >= 70 && marks <= 100) category = 1;
            else if (marks >= 50 && marks <= 69) category = 2;
            else if (marks >= 40 && marks <= 49) category = 3;

            switch (category) {
                case 1:
                    cout << "Distinction" << endl;
                    break;
                case 2:
                    cout << "Credit" << endl;
                    break;
                case 3:
                    cout << "Pass" << endl;
                    break;
                default:
                    cout << "Fail" << endl;
                    break;
            }
        }


    } while (true);

    return 0;
}