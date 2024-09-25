#include <iostream>
#include <vector>
using namespace std;

void occur (vector <int> v1 , int key,int i){
    if(i==v1.size()){
        return ;
    }
    if(v1[i]==key){
        cout<<i<<" ";
    }
    occur(v1,key,i+1);
}

int main() {
    vector <int> v1 = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key =2;
    occur(v1,key,0);
    return 0;
}
 
