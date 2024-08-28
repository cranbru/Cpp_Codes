#include <iostream>
using namespace std ; 

void large(int i , int j , int k ){
    if(i>j){
        if(i>k){
            cout<<i<<endl;

        }else{
            cout<<k<<endl;
        }

    }else if(j>k){
        cout<<j<<endl;
    }else{
        cout<<k<<endl;
    }
}

int usingvariable(int i ,int j ,int k){
    int big = 0;
    if(i>j){
        big = i;
    }
    else{
        big = j;
    }

    if(big>k){}
    else{
        big=k;
    }

    return big;
}

int main(){
    large(111,20,3);
    cout<<usingvariable(111,20,3);

    return 0 ;
}