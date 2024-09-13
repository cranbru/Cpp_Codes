#include <iostream>
using namespace std;

bool pali(int num){
    int answer=0;
    bool palidrome = false;
    if(num<0){
        return palidrome;
    }
    int temp = num;
    while(temp>0){
        answer=(answer*10)+temp%10;
        temp/=10;
    }
    if(num==answer){
        palidrome=true;
    }
    return palidrome;

}


int main(){
    cout<<pali(-121)<<endl;
}