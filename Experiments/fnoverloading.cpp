#include <iostream>
using namespace std;
#include <string>

void car(int wheeles){
    printf("WHEELES \n");
}

void car(string name){  
    printf("NAME \n");

}




int main(){

    car("AUDI R8");
    car(2);

    return 0 ;
}