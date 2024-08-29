#include <iostream>
using namespace std;

int updater(int num , int bit , int value){
    
    //First we have to clear the ith bit
    int clearednum = num & ~(1<<bit);

    return(clearednum | (value<<bit));
}

int main(){
    cout<<updater(15,2,0)<<endl;
}