#include<iostream>
using namespace std;

int main(){
    do
    {int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    cout << "Your Grade Is: A \n";
    else if (marks >=  80 && marks <= 89)
    cout << "Your Grade Is: B \n";
    else if (marks >= 70 && marks <= 79)
    cout << "Your Grade Is: C \n";
    else if (marks >= 60 && marks <= 69)
    cout << "Your Grade IS: D \n";
    else
    cout << "Your Grade is: F \n";
    } while (true);
    
    

return 0;
}