#include <iostream>
using namespace std;

int main() {
    int a=6,b=50,c=10;
    if(a>b){
        if(a>c){
            cout<<a<<" IS THE GREATEST";
        }
        else{
            cout<<c<<" IS THE GREATEST";
        }
    }
    else{
        if(b>c){
            cout<<b<<" IS THE GREATEST";
        }
        else{
            cout<<c<<" IS THE GREATEST";
        }
    }
    return 0;
}