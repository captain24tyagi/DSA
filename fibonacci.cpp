#include <iostream>
using namespace std;
int main(){

int n = 10;
int a = 0, b= 1;

cout << a << " ";
for (int i = 1; i <= n; i++)
{
    int sum = a + b;
    cout << sum << " ";
    a=b;
    b=sum;
}

return 0;
}