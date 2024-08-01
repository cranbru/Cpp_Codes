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

int main(){
    large(1111,20,3);

    return 0 ;
}