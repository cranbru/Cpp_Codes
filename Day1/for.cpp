#include <iostream>
using namespace std;

int main(){
    int i;
    cout<<"Enter the number : "<<endl;
    cin>>i;
    int j =i;
    i = i-1;

    for( i-1 ;i>=2  ;i--){
        if (j%i==0){
            cout<<"NOT PRIME"<<endl;
        }else{
            cout<<"NUMBER IS PRIME"<<endl;
        }
        


    }


    //cout<<"FINAL : "<<i;

    return 0;
}