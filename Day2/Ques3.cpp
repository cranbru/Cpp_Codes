#include <iostream>
using namespace std;

int main(){
    int p;
    int r;
    int t;

    cout<<"Enter Principal amount : ";
    cin>>p;

    cout<<"Enter Rate: ";
    cin>>r;
    
    cout<<"Enter Time : ";
    cin>>t;

    int simple = (p*r*t)/100 + p;

    cout<<"Your Net amount after interest is : "<<simple<<endl;

    return 0 ;

}