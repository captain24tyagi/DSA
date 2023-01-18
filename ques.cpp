#include <iostream>
using namespace std;
int main(){

int a = 1, b = 2;

if(a-- > 0 && ++b > 2){
    cout << "Stage1- inside if" << endl;
}
else{
    cout << "Stage1- inside else" << endl;
}
cout << a << " " << b << endl;
return 0;
}