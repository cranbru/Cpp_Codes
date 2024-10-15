#include <iostream>
#include <string>
using namespace std;

int main() {
    string str ="";
    cin>>str;
    bool ispali = true;
    for(int i = 0 ;i<(str.size()/2);i++){
        if(str[i]!=str[str.size()-i-1]){
            ispali=false;
        }
    }
    if(ispali){
        cout<<"YES A PALIDROME \n";
    }
    else{
        cout<<"NOT A PLAIDROME\n";
    }
    return 0;
}