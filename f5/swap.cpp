#include <iostream>
using namespace std;

int main() {
    int a =5,b=6;
    a = a+b;
    b = a-b;
    a=a-b;
    cout<<"A NOW IS "<<a<<endl;
    cout<<"B NOW IS "<<b;
    return 0;
}