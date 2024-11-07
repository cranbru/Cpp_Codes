#include <iostream>
#include <vector>
using namespace std;

void func(vector <int> &vec,int i){
    if(i==vec.size()){
        return;
    }
    vec[i]=i+1;
    func(vec,i+1);
}

void Printarr(vector <int> vec){
    for(int i = 0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> vec(5);
    func(vec,0);    
    Printarr(vec);

}