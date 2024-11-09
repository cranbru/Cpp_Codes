#include <iostream>
using namespace std;

int facto(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*facto(n-1);
}


int main() {
    cout<<facto(5);
    return 0;
}
