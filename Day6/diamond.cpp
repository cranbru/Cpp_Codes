#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  "<<endl;
    cin>>n;
    n=n/2;
        

    for(int i = 1 ;  i<=n ; i++){
        for(int o = 1 ; o<=n-i ; o++){
            cout<<" ";
        }
        for(int o = 1 ; o<=2*i-1;o++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(int i = n ; i>=1 ;i--){//Just reversing the loop
        for(int o = 1 ; o<=n-i ;o++ ){
            cout<<" "; 
        }
        for(int o = 1 ;o<=2*i-1;o++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0 ; 
}