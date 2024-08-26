#include <iostream>
using namespace std;

int nthbit(int num , int i ){
    int Bitmask = (1<<i);
    if(!(num&Bitmask)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    cout<<nthbit(7,3);
}