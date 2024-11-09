#include <iostream>
#include <vector>
using namespace std;


void Printarr(vector <int> v1){
    for(int i =0 ; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

void Checker(vector <int> v1){
    
}



void bt(vector <int> &v1,int i){
    if(i==v1.size()){
        Printarr(v1);
        return;
    }
    v1[i]=i+6;
    bt(v1,i+1);
    
    v1[i]-=9;
}


int main() {
    vector <int> v1(5,0);
    bt(v1,0);
    Printarr(v1);
    return 0;
}