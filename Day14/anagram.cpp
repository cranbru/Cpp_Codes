#include <iostream>
#include <string>
using namespace std;

bool ana(string str1 , string str2 ){
    if(str1.length()!=str2.length()){
        cout<<"NOT AN ANAGRAM\n";
        return false;
    }

    int arr[26]={0};

    for(int i=0;i<str1.length();i++){
        arr[str1[i]-'a']++;
    }

    for(int i =0 ; i<str2.length();i++){
        if(arr[str2[i]-'a']==0){
            cout<<"NOT AN ANAGRAM\n";
            return false;
        }

        arr[str2[i]-'a']--;
    }
    cout<<"IT'S AN ANAGRAM \n";
    return true;
}

int main(){
    string str1 = "cranbru",str2 ="rubncar";
    ana(str1,str2);
}
