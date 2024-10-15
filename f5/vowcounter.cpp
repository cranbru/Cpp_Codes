#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abhinavN";
    int counter = 0;
    for(int i=0 ; i<str.size();i++){
        if(str[i]==97 || str[i]== 101 || str[i]==105 || str[i]== 111|| str[i]==117){
            counter++;
        }
    }
    cout<<"COUNT IS : "<<counter;

    return 0;
}