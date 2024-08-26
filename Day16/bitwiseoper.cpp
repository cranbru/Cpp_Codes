#include <iostream>
using namespace std;

int main(){
    cout<<(6&2);// THIS PARENTHESES ENSURES THAT THE VALUE IS CALCULATED BEFORE PRINTING 
    //&--> JUST LIKE AND GATE BETWEEN THE BINARY VALUES OF 6 and 2,  6-->110 and 2--010 so 6&2 = 010 which is equal to 2 in decimal

    cout<<(6|2);
    //|-->OR operator 6-->110 and 2-->010 so 6|2 = 110 = 6 in decimal

    cout<<(6^2);
    //^ --> XOR operator IF SAME INPUTS THEN OUTPUT =0 IF DIFFERENT THEN OUTPUT =1
    // 6-->110 and 2-->010 so 6^2 100 so 4 in decimal 
}