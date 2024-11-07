#include <iostream>
#include <string>
using namespace std;

void func(string str,string ans=""){
    if(str == ""){
        cout<<ans<<endl;
        return;
    }
    func(str.substr(1),ans+str[0]);
    func(str.substr(1),ans);
    
}

int main() {
    string str = "abc";
    func(str);
    return 0;
}