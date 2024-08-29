#include <iostream>
using namespace std;

//REFERENCE 3^5 

int fastexpo(int num , int power){
    int value = 1;
    while(power>0){
        if((power&1)){
            value*=num;
            }
        power = power>>1;
        num = num *num;
    }

    return value;
}

int main(){
    cout<<fastexpo(3,5);
}