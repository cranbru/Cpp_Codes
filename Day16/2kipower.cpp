#include <iostream>
#include <string>
using namespace std;

string check2power(int num){
    if((num&(num-1))){
        return "NOPE";
    }
    else{
        return "YES";
    }
}

int main(){
    cout<<check2power(125);
}