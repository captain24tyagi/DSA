#include <iostream>
using namespace std;

void getMinMax(int arr[], int size){
    
int max = INT_MIN;
int min = INT_MAX;


for (int i = 0; i < size; i++)
{
   cin >> arr[i];
   cout << arr[i] << " ";
}
cout << endl;

for (int i = 0; i < size; i++)
{
   if(arr[i] > max){
     max = arr[i];
   }

   if(arr[i] < min){
     min = arr[i];
   }
}

cout << "maximum : " << max << endl;
cout << "minimum : " << min << endl;

}

int main(){

int arr1[10];
int n;
cin >> n;
getMinMax(arr1, n);

return 0;
}