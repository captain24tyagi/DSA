#include <iostream>
using namespace std;

int setBitsCount(int n, int m){

    int count1 = 0, count2=0;
    while (n!=0)
    {
        count1 += n&1;
        n = n >> 1;
    }
    
    while (m!=0)
    {
        count2 += m&1;
        m = m >> 1;
    }
    int ans = count1 + count2;
    
    return ans;
}
int main(){

int a, b;
cin >> a >> b;

cout << "total set bits: " << setBitsCount(a, b) << endl;
return 0;
}