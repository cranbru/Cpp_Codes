#include <iostream>
using namespace std;

int pairing(int n){

    if(n==0 || n==1){
        return 1;
    }
    return pairing(n-1)+(n-1)*pairing(n-2);
}

int main() {
    cout<<pairing(3);
    return 0;
}