#include <iostream>
using namespace std;

int main() {
    int num = 7;

    bool flipper = false;

    for(int i =0 ;i<=num;i++){
        flipper = !flipper;
    }

    if(flipper){
        cout<<"NUMBER IS EVEN";
    }
    else{
        cout<<"NUMBER IS ODD";
    }

    return 0;
}