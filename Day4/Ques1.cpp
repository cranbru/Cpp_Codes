#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Your Number : "<<endl;
    cin>>num;

    if (num>0){
        cout<<"The number is positive as you should be in life : "<<endl;
    }else if(num==0){
        cout<<"The number is zero as the number of your female friends : "<<endl;

    }else{
        cout<<"The number is negative, which is also equal to the number of your gf's : "<<endl;
    }
    
    return(0);
}