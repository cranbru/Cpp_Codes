#include <iostream>
#include <vector>
using namespace std;

void Printvec(vector <int> vec){
    for(int i = 0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}


void func(vector <int> &vec,int i){
    if(i==(vec.size())){
        Printvec(vec);
        return;
    }
    vec[i]=i+1;
    func(vec,i+1);
    vec[i]-=2;//BACKTRACK 
}



int main() {
    vector <int> vec(5);
    func(vec,0);
    Printvec(vec);
    return 0;
}