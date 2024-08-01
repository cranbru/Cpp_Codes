#include <iostream>
using namespace std ; 


int fact(int n ){
    int f = 1;
    for(int i = 1 ; i<=n ; i++){
        f*=i;
    }

    return f;
}

int main(){
    cout<<fact(7)<<endl;
    return 0;
}