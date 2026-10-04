#include <iostream>
using namespace std;

int main(){
   double num1,num2;
char op;

cout << "enter your first number";
cin >> num1;
cout << "enter the operator";
cin >> op;
cout << "enter your second number";
cin >> num2;



double result;
if (op == '+') result = num1+num2;
else if (op == '-' ) result = num1 - num2;
else if (op ==  '*') result = num1*num2;
else if (op == '/') result = num1/num2;
else {
    cout << "invalid operator" ;
    return 0; 
}



cout << "Result is : "<< result << endl;
return 0;
}