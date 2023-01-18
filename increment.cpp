#include <iostream>
using namespace std;
int main(){

int i = 5;
int a = i++;

int j = 6;
int b = ++j;

cout << a << endl;
cout << b << endl;

int k = 5;
int c = --k;

int l = 6;
int d = l--;


cout << c << endl;
cout << d << endl;

return 0;
}