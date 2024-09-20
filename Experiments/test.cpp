#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> ques ={1,2,3,1,1,3};
    vector <int> v1(100,0);
    int ans =0;
    int maxval=ques[0];
    for(int i=0;i<ques.size();i++){
        v1[ques[i]]+=1;
        maxval=max(maxval,ques[i]);
    }
    for(int i=0;i<maxval+1;i++){
        int adder =((v1[i]-1)*(v1[i])/2);
        if(adder>0){
            ans+=adder;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}