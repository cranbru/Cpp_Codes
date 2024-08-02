#include <iostream>
using namespace std;

//TC IS N*N

void bubblesort(int arr[], int n){//arr[] and *arr is the exact same, it is just an stylistic preference
    for(int i = 0 ;  i<n-1 ; i++){

        for(int j = 0 ;j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){    // FOR DESCENDING JUST '>' --- '<'
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void Printarr(int *arr, int n){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}   
int main(){
    int arr[5] = {9,4,1,7,10};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    Printarr(arr,n);
    return 0;
}
//NONE OF THE SORTING TECHS IS USED IRL