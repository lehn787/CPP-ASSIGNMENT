#include <iostream>
using namespace std;

int main(){
    int age;
    string name;

    cout << " Enter your age :";
    cin >> age;
    
    cin.ignore();
    
    cout << "Enter your full name : ";
    getline(cin,name);

    cout << "NAME :" << name <<"\n AGE : " << age << endl;
    return 0;
    



}