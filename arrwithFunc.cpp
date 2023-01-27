#include <iostream>
using namespace std;

void printArray(int arr[], int size){
  
  cout << "Array: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

}
int main(){
    int first[] = {1, 2, 3, 4, 5, 6, 8};
    int n;
    cin >> n;
    printArray(first, n);

    int second[] = {10, 20, 30, 40, 50, 60, 80};
    n = 2;
    printArray(second, n);


return 0;
}