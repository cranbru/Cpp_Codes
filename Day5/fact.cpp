#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int fact = 1;
    for(int i = 1 ;i<=n; i++){
        fact*=i;
    }

    cout<<"FACTORIAL IS : "<<fact<<endl;

    return 0;
}