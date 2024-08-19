#include <iostream>
using namespace std;


void lowercaser(char string[] , int n){
    for(int i = 0 ; i<n ; i++){
        if(string[i]>='A' && string[i]<='Z'){
            string[i] = string[i] - 'A' + 'a';// YOU CAN ALSO DIRECTLY DO +/- 32
        }
    }
}


int main(){

    char str[] = "CrAnbrU";  
    lowercaser(str , strlen(str));
    cout<<str<<endl;

}