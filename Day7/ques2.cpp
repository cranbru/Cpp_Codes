#include <iostream>
using namespace std ;

int sdigi(int n){
    int sum=0;
    while(n>1){
        sum= sum + n%10;
        n=n/10;
    }
    cout<<sum<<endl;


}
int main(){
    sdigi(333);

    return 0 ;
}
