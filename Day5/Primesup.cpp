#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ok;
    cout<<"TILL WHEN : ";
    cin>>ok;

    for(int i = 2 ; i<=ok; i++){
        bool ISPRIME =true;
        for(int n=2 ; n<=sqrt(i); n++){
             
            if(i%n==0){
                ISPRIME = false;
                break;
            }
        }
        if(ISPRIME){
            cout<<i<<" ";
        }
    }
    return 0;
}