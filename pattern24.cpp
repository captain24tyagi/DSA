#include <iostream>
using namespace std;
int main(){

int n;
cout << "Enter the number: " << endl;
cin >> n;

int row = 1;
while (row<=n)
{
    //space triangle
    int space = n - row;
    while (space)
    {
        cout << "  ";
        space--;
    }

    //Middle triangle
    int col = 1;
    while (col<=row)
    {
        cout << col << " ";
        col++;
    }

    //last triangle
    int start = row - 1;
    while (start)
    {
        cout << start << " ";
        start--;
    }
    cout << endl;
    row++;
}

return 0;
}


            //         1
            //       1 2   1
            //     1 2 3   2 1
            //   1 2 3 4   3 2 1
     // space      mid      last