#include <iostream>
using namespace std;

int sumArr(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    };

    return sum;
    
}
int main(){
    int a[] = {2, 7, -4, 1, 11};
    int n;
    cin >> n;

    cout << "Sum of elements of array is given as: " << sumArr(a, n);
    
return 0;
}