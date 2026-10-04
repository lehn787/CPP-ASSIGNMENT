#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;

    cout << "enter the first num : " << endl;
    cin >> num1; 

    cout << "enter the second num : " << endl;
    cin >> num2;

    cout << "enter the third num : " << endl;
    cin >> num3;

    if (num1 > num2 > num3){
        cout << "num1 is higher" << endl;
    } else if (num2 > num1 > num3){
        cout << "num2 is higher" << endl;
    } else if (num3 > num1 > num2){
        cout << "num3 is higher" << endl;
    } else 
        cout << "all are equal";   
    return 0;        
}
