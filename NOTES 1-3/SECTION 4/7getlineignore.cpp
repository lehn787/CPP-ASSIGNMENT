#include <iostream>
using namespace std;

int main (){

int age;
string name;

cout << "Enter your age : ";
cin >> age;

cin.ignore();

cout << "Enter you Full name : ";
getline(cin, name);

cout << "Your Age : " << age << " Your name : " <<  name;


}