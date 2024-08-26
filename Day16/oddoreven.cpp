#include <iostream>
using namespace std;

//ACCESSING A PARTICULAR BIT LIKE THIS IS KNOWN AS BITMASKING , MEANS WHAT NUMBER AND WHAT OPERATION TO USE TO ACCESS THE DESIRED BIT

int main(){
    int x = 7;
    if((x&1)==0){   //AGAIN MADE THE MISTAKE OF NOT USING PARENTHESES
        cout<<"NUMBER IS EVEN";
    }
    else{
        cout<<"NUMBER IS ODD";
    }
}