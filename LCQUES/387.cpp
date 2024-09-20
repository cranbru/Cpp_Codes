#include <iostream>
#include <vector>
#include <string>
using namespace std;

int firstnonrepeat(string s){
    vector <char> v1;
    int reference=s.size();
    int defaultunique=-1;
    

    for(int i = 0;i<s.size();i++){
        bool isrepeat =false;
        for(int j = 0;j<v1.size();j++){
            if(s[i]==v1[j]){
                isrepeat =true;
                break;
            }  
        }
        v1.push_back(s[i]);

        if(!isrepeat){
            defaultunique=i;
            v1.push_back(s[i]);
        }
    }
    return defaultunique;
}

int main(){
    string s ="leetcode";
    cout<<firstnonrepeat(s)<<endl;
}
