#include <iostream>
using namespace std;

int sumofn(int n,int i=1){
    if(i>n){
        return 0;
    }
    
    return i + sumofn(n,i+1);

}

int main() {
    cout<<sumofn(7)<<endl;
    return 0;
}