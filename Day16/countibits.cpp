#include <iostream>
using namespace std;

int counter(int num ){
    int count = 0 ;
    while(num>0){
        int last = num&1;
        count+=last;
        num=num>>1;
    }
    return count;
}

int main(){
    cout<<counter(7);
}