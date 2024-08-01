#include <iostream>
using namespace std;

int main(){
    int arm;
    cout<<"Enter your Neil number : "<<endl;
    cin>>arm;

    int unit = arm%10;
    int tens = (arm%100-unit)/10;
    int hun  = (arm - arm%100 )/100;

    unit = unit*unit*unit;
    tens = tens*tens*tens;
    hun = hun*hun*hun;

    if ((unit+tens+hun) == arm) {
        cout<<"Number is Armstrong :)";

    }else{
        cout<<"Number is Not Armstrong ";
    }


    return  0 ;

}