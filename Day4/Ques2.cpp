#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter Your Year : "<<endl;
    cin>>year;

    if (year%4 != 0){
        cout<<"Your Year is not a Leap Year :( )"<<endl;
    }else if(year%400 == 0 ){
        cout<<"Your Year is a Leap Year and a century leap year  :) )"<<endl;
    }else{
        cout<<"Your Year is a Leap Year :| )"<<endl;
    }







    return(0);
}