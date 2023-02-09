#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1; 

    // Done in order to prevent max int value disturbance
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = (start + end)/2;
    }
    return -1;
}
int main(){

int even[6] = {2, 4, 6, 8, 12, 18};
int odd[6] = {3, 5, 7, 9, 11};

cout << "Index of 12 is: " << binarySearch(even, 6, 12) << endl;

return 0;
}