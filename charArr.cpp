#include <iostream>
using namespace std;

void printArray(char ch[], int size){
   
   cout << "Array: ";
   for (int i = 0; i < size; i++)
   {
     cout << ch[i];
   }
   cout << endl;
   
}
int main(){
    int n;
    cin >> n;
    char hello[] = {'s', 'a', 'r', 't', 'h', 'a', 'k'};
    printArray(hello, n);

return 0;
}