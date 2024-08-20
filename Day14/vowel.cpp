#include <iostream>
#include <string>
using namespace std;

void vowelcount(string str1 ){
    int count = 0 ;
    for(int i = 0 ; i<str1.length();i++){
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i'|| str1[i]=='o'|| str1[i]=='u'){
            count++;
        }
    }
    cout<<"THE NUMBER OF VOWELS IS : "<<count<<endl;
}

int main(){
    string str1 = "cranbru";
    vowelcount(str1);
}
