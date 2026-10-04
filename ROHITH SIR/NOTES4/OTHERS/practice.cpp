#include <iostream>
using namespace std;

int main() {

int num1;
int num2;
double marks;

cout << "Enter num 1 : ";
cin >> num1;

cout << "Enter num 2 : ";
cin >> num2;

if (num1 >= num2){
      cout << "1st number is higher" << endl; 
}else if (num1 <= num2){
      cout << "2nd number is higher" << endl;
}else {
      cout << "both are equal" <<endl;
}






return 0;

}