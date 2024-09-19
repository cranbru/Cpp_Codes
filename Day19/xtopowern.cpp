#include <iostream>
using namespace std;

int pow(int x,int n){
    if(n==1){
        return x;
    }
    int half = pow(x,n/2);
    if(n%2==0){
        return half*half;
    }
    else{
        return x*half*half;
    }
}

int main() {
    cout<<pow(3,5);
    return 0;
}