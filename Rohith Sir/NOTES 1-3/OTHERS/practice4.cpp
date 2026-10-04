#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float marks;

    cout << "Enter your roll number : ";
    cin >> rollNo;
    cin.ignore();`
    cout << "Enter your full name : ";
    getline(cin, name);
    cout << "Enter your marks : ";
    cin >> marks;

    cout << "Your name is : " << name << endl;
    cout << "Your roll number is : " << rollNo << endl;
    cout << "Your marks are : " << marks << endl;
    return 0;
}