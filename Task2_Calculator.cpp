#include <iostream>
using namespace std;

int main() {
double a, b;
char op;

cout << "Enter first number: ";
cin >> a;

cout << "Enter operator (+ - * /): ";
cin >> op;

cout << "Enter second number: ";
cin >> b;

if (op == '+')
cout << "Result = " << a + b << endl;
else if (op == '-')
cout << "Result = " << a - b << endl;
else if (op == '*')
cout << "Result = " << a * b << endl;
else if (op == '/') {
if (b == 0)
cout << "Error: division by zero!" << endl;
else
cout << "Result = " << a / b << endl;
}
else
cout << "Invalid operator!" << endl;

return 0;
}
