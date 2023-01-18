#include <iostream>
using namespace std;
int main(){

int n;
cout << "Enter the value of n: " << endl;
cin >> n;

int product = 1;
int sum = 0;

while (n!=0)
{
    int rem = n%10;
    product = product * rem;
    sum = sum + rem;
    n=n/10;
}

cout << "Product of digits: " << product << endl;
cout << "Sum of digits: " << sum << endl;

int answer = product - sum;

cout << answer << endl;

return 0;
}