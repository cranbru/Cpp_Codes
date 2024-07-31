#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int p;
    cout<<"Enter the number : ";
    cin>>p;
    bool ISPRIME = true;

    for(int i=2 ; i<=p/2; i++){ 
        if(p%i==0){
            cout<<"THE NUMBER "<<i<<" "<<"IS A FACTOR OF "<<p<<endl;
            ISPRIME = false;

        }
    }

    if(ISPRIME){
        cout<<"THE NUMBER "<<p<<" IS PRIME"<<endl;

    }

    return 0;   
}