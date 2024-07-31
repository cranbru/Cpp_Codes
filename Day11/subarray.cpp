#include <iostream>
using namespace std; 

int formula(int n){
    int i = (n*(n+1))/2;
    return i ;
}

void subarr(int *arr , int n ){
    for(int start = 0 ; start<n ; start ++){
        for(int end=start ;end<n;end++){
            cout<<'(';
            for(int i = start ; i<=end;i++){
                if(i>start){
                     cout<<',';
                }
                cout<<arr[i];
            }
            cout<<')'<<" ";
        }
        
        cout<<endl;
    }
}

int main(){
    int arr[6] = {3,4,1,5,7,8};
    int n = sizeof(arr)/sizeof(int);
    subarr(arr,n);
    cout<<"TOTAL NUMBER OF SUBARRAYS :  "<<formula(n);
    return 0 ; 
}
