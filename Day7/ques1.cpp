#include <iostream>
using namespace std ;

void check(int m ){
    int final = 0;
    int x;
    int n = m ;
    while(n>1){
        x = n%10;
        n=n/10;
        final=(final+n)*10;
        
    }
    final/=10;
    if(final==m){
        cout<<"YES IT IS PALINDROME "<<endl;
    }else{
        cout<<"NO IT IS NOT PALINDROME "<<endl;
    }

}

int main(){
    check(121);
    return 0;
}