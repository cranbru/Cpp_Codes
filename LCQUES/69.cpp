#include <iostream>
using namespace std;

int main(){
    int num = 50;
    
    for(int i =1;i<num;i++){
        if(num/i==i){
            cout<<"SQRT IS : "<<i<<endl;
            break;
        }
    }
    return 0;
}