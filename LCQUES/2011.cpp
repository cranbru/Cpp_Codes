#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector <string> v1 = {"x++","x--","--x","++x"};
    char c1[]={"+"};
    int x=0;
    for(int i =0;i<v1.size();i++){
        if(v1[i][1]==c1[0]){
            x+=1;
        }
        else{
            x-=1;
        }
        
    }
    cout<<x<<endl;
    return 0;
}