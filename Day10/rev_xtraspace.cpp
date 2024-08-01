#include <iostream>
using namespace std;

void printArr(int *arr , int n){
    for(int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {5,9,6,2,1};
    int n = sizeof(arr)/sizeof(int);

    int copyarr[n];

    for(int i = 0 ; i<n ; i++){
        int j = n-i-1 ;
        copyarr[i] = arr[j];
    }

    
    for(int i = 0 ; i<n ; i++){
        arr[i]=copyarr[i];
    }

    printArr(arr , n );

    return 0;
}