#include <iostream>
using namespace std;
int main(){

int num = 2;

while (num>0)
{
   switch (num)
{
case 1:
    cout << "One" << endl;
    continue;

case 2:
    cout << "Two" << endl;
    continue;

case 3:
    cout << "Third" << endl;
    continue;

default:
    break;
}
}

return 0;
}