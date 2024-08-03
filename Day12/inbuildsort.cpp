#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7] = {5,6,11,77,22,1,8};
    int n = sizeof(arr)/sizeof(int);
    print(arr,n);











    return 0 ;
}