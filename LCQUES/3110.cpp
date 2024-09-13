#include <iostream>
#include <string>
using namespace std;

int main(){
    int ans = 0;
    string x = "hello";
    for(int i=0;i<x.size()-1;i++){
        ans+=abs(char(x[i])-char(x[i+1]));
       
    }
    cout<<ans<<endl;
}