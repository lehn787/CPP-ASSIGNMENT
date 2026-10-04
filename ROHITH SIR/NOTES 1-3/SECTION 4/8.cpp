#include <iostream>
using namespace std;

int main(){
    string name;
    int rollno;
    float marks;

    cout << "Enter your Roll no. : ";
    cin >> rollno;

    cin.ignore();
    
    cout << "Enter your Full name : ";
    getline(cin, name);

    cout << "Enter your marks : ";
    cin >> marks;


    cout << "\n--- Student Record ---\n";
    cout << "Name : " << name << endl;
    cout << "Roll No : " << rollno << endl;
    cout << "Marks : " << marks << endl;

    return 0;



}