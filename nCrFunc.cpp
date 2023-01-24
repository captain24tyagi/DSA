#include <iostream>
using namespace std;

int factorial(int num){
  
  int fact = 1;

  for (int i=1; i<=num; i++){
    fact = fact*i;
  }

  return fact;
}

int nCr(int n, int r){
   int nume = factorial(n);
   int deno = factorial(r) * factorial(n-r);

   int ans = nume/deno;

   return ans;
};

int main(){
   
   int number1, number2;
   cin >> number1 >> number2;

   cout << nCr(number1, number2) << endl;

return 0;
}