#include <iostream>
using namespace std;

bool isEven(int a){
   if (a&1)
   {
    return 0;
   }

    return 1;
   
}

int main(){

   int num;
   cin >> num;

    if(isEven(num)){
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    
    
   

return 0;
}