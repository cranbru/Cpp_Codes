#include <iostream>
using namespace std;

//SET THE BIT TURNING THE ith BIT VALUE TO 1

int setbit(int num , int i ){
    int Bitmask = (1<<i);
    return (num|Bitmask);

}

int main(){
    cout<<setbit(32,0);
}