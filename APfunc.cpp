#include <iostream>
using namespace std;

int prog(int n){

    int ans = (3 * n) + 7;

    return ans;
}

int main(){

int num;
cin >> num;

cout << num << "th term of AP is: " << prog(num) << endl;

return 0;
}