#include <iostream>
using namespace std;

int main(){
    int P ;
    cout<<"ENTER PRINCIPAL AMOUNT : "<<endl;
    cin>>P;

    int R ;
    cout<<"ENTER RATE : "<<endl;
    cin>>R;

    int T;
    cout<<"ENTER NO OF YEARS : "<<endl;
    cin>>T;

    float newR= 1 + (R/100.0);

    float multipler = 1.0;

    for(int i = 0 ; i<T ; i++){
        multipler *=newR;
    }
    
    cout<<"YOUR FINAL AMOUNT AFTER INTEREST : "<<multipler*P<<endl;
    return 0;
}