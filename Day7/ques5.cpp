#include <iostream >
using namespace std ; 

char next(char a){
    int s = a + 1;
    char x = char(s);
    cout<<x<<endl;
}

int main(){
    next('A');
    next('B');
    next('f');
    next('a');
    char o ;
    cout<<"ENTER THE CHARACTER : "<<endl;
    cin>>o;
    next(o);


    return 0;

}