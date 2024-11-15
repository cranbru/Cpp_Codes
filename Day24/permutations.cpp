#include <iostream>
#include <string>
using namespace std;


void per(string str,string ans=""){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    int n = str.size();
    for(int i = 0; i<n;i++){
        per(str.substr(0,i)+str.substr(i+1,n-i-1),ans+str[i]);
    }
}


int main() {
    string str = "abc";
    per(str);
    return 0;
}