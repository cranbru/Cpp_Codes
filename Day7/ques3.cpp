#include <iostream>
using namespace std ;

int sqr(int a , int b){
   cout<<a*a + b*b + 2*a*b<<endl;
}

int main(){
    sqr(2,3);
    return 0;
}