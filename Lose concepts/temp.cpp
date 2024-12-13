//PRINTING ALL THE NUMBERS STARTING FROM 1
#include <iostream>
using namespace std;


int main() {
    int terms=100;

    for (int i = 0; i < terms; i++) {
        int lastnum=0;
        int temp = i;
        while(temp>0) {
            lastnum = temp;
            temp/=10;
        }
        if(lastnum==1) {
            cout<<i<<" ";
        }

    }

}