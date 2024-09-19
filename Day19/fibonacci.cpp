#include <iostream>
using namespace std;

void fib(int n , int x=0 , int y=1){

    if(n==0){
        return;
    }
    cout<<x+y<<" ";
    return fib(n-1,y,x+y);
}

int main(){
    int n =7;
    if(n>0){
        cout<<0<<" ";
        if(n>1){
            cout<<1<<" ";
        }
    }
    if(n>2){
        fib(n);//0 1 1 2 3 5 8 13
    }
    
}