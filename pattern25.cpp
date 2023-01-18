#include <iostream>
using namespace std;
int main(){

int n;
cout << "Enter the number: " << endl;
cin >> n;

int row = 1;
while (row<=n)
{
    //triangle 1
    int col = 1;
    while (col<=n-row+1)
    {
        cout << col << " ";
        col++;
    }

    //triangle 2
    int st = row-1;
    while (st)
    {
        cout << "*" << " ";
        st--;
    }

    //triangle 3
    int stt = row-1;
    while (stt)
    {
        cout << "*" << " ";
        stt--;
    }

    //triangle 4
    int smt = 1;
    while (smt<=n-row+1)
    {
        cout << n - row - smt + 2 << " ";
        smt++;
    }

    cout << endl;
    row++;
    
}


return 0;
}