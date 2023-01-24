#include <iostream>
using namespace std;
int main(){

int a=6, b=3;
char oper;
cin >> oper;

switch (oper)
{
case 'x':
    cout << a*b << endl;
    break;

case '+':
    cout << a+b << endl;
    break;

case '-':
    cout << a-b << endl;
    break;

case '/':
    cout << a/b << endl;
    break;

case '%':
    cout << a%b << endl;
    break;

default:
    cout << "Please Enter valid operation" << endl;
    break;
}
return 0;
}