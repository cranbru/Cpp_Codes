#include <iostream>
#include <string>   
using namespace std;

void binstr(string ans,int lastplace,int n){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace!=1){
        binstr(ans + "0",0,n-1);
        binstr(ans+"1",1,n-1);
    }
    else{
        binstr(ans+"0",0,n-1);
    }
}

int main() {
    binstr("",0,5);
    return 0;
}