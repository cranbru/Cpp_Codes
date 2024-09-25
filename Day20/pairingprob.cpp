#include <iostream>
using namespace std;

int fact(int n){

    if(n==1 || n==0){
        return 1;
    }

    return (n) * fact(n-1);
}

int pairing(int n){//THIS IS THE MATHEMATICAL SOL
    return (fact(n)/2)+1;
}

int main() {
    
    cout<<pairing(3);
    return 0;
}