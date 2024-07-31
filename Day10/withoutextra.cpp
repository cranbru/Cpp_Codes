#include <iostream>
using namespace std;

void printArr(int *arr , int n){
    for(int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {1,11,5,12,55,118};
    int n = sizeof(arr) / sizeof(int);

    int i = 0;
    int j = n-1 ; 

    while(j>i){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    printArr(arr,n);
    return 0; 
}