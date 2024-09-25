#include <iostream>
#include <string>
#include <vector>
using namespace std;

string remdup(string s,string nodup,vector <int> v1,int i){ 

    if(s.size()==i){
        return nodup;//MADE MISTAKE HERE WROTE RETURN EMPTY THEREFORE THE STRING WAS LOSING ALL ITS PREVIOUS OPERATIONS
    }

    if(v1[int(s[i])-97]==0){
        nodup.push_back(s[i]);
        v1[int(s[i])-97]=1;
    }

    return remdup(s,nodup,v1,i+1);
    
}


int main() {   
    vector<int> dict(26,0);
    string s = "abhinav";
    string nodup ="";
    cout<<remdup(s,nodup,dict,0);
    return 0;
}   