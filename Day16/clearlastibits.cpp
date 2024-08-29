#include <iostream>
using namespace std;

//SHOULD MAKE THE PARAMETERS MORE LEGIBLE , IT IS A LITTLE CONFUSING 

int ibitclearer(int num, int numbits){
    while(numbits>=0){
        num = num & (~(1<<numbits));
        numbits--;
    }
    return num;
}

int main(){
    cout<<ibitclearer(15,2)<<endl;
}