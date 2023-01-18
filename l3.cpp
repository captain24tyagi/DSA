#include <iostream>
using namespace std;
int main(){

char ch;
cin >> ch;

if(ch >= 'A' && ch <= 'Z'){
    cout << "Uppercase character" << endl;
}
else if(ch >= 'a' && ch <= 'z'){
    cout << "Lowercase character" << endl;
}
else{
    cout << "numeric" << endl;
}
return 0;
}