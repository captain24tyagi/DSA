#include <iostream>
using namespace std;
int main(){

int amount;
cout << "Enter the amount: " << endl;
cin >> amount;

int rs100=0, rs50=0, rs20=0, rs1=0;
switch (1)
{
case 1:
    rs100 = amount%100;
    amount = amount/100;
    cout << "Rs.100 notes: " << rs100 << endl;

case 2:
    rs50 = amount%50;
    amount = amount/50;
    cout << "Rs.50 notes: " << rs50 << endl;

case 3:
    rs20 = amount%20;
    amount = amount/20;
    cout << "Rs.20 notes: " << rs20 << endl;

case 4:
    rs1 = amount%1;
    amount = amount/1;
    cout << "Rs.1 notes: " << rs1 << endl;

default:
    break;
}
return 0;
}