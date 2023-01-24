#include <iostream>
using namespace std;

void printCount(int n){

    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main(){
    int num;
    cin >> num;
    printCount(num);
return 0;
}