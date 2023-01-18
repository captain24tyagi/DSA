#include <iostream>
using namespace std;
int main(){

// int n;
// cin >> n;

// int i = 2;
// int sum = 0;

// while(i<=n){
//    cout << i << " ";
//    sum += i;
//     i = i + 2;
// }
//  cout << endl;

// cout << sum << endl;

int num;
cin >> num;

int i=1;

while (i < num)
{
   if(num%i == 0){
    cout << "Not a Prime number" << endl;
   }
   else{
    cout << "Prime number" << endl;
   }
   i = i + 1;
}


return 0;
}