#include <iostream>
using namespace std;

//PRINT ALL THE NUMBERS STARTING WITH 1 

int main(){
    for(int i = 1 ; i <101 ; i++){
        if(i == 1 || i/10==1){
            cout<<i<<" ";
        }
    }
}