#include <iostream>
using namespace std ;

int main(){
    int amt;
    cout<<"ENTER THE NUMBER OF TERMS : ";
    cin>>amt;
    int fnum = 0;
    int snum = 1 ;
    cout<<fnum<<" ";
    cout<<snum<<" ";
    int tnum;

    for(int i = 3 ; i<=amt ; i++ ){
        tnum = fnum + snum ;
        cout<<tnum<<" ";
        fnum =snum;
        snum =tnum ;
    }
    return 0 ; 
}
    