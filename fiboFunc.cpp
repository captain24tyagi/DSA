#include <iostream>
using namespace std;

void fibonacci(int n){
    int a = 0, b = 1;
    int sum = 0;
    
    cout << a << " " << b << " ";
    for (int i = 0; i < n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << " ";
    }
    
}
int main(){
    int num;
    cin >> num;
    
    fibonacci(num);
    

return 0;
}