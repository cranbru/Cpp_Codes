#include <iostream>
using namespace std;
// It divides array into 2 parts sorted(genrally would be on the left part),unsorted(genrally on the right part)
// Selection sort is kind of reverse of bubblesort
//TC IS AGAIN N*N

void selectionsort(int *arr , int n ){
    for(int i =0 ; i<n-1 ; i++){
        int minindex = i;
        for(int j = i ;j<n;j++){
            if(arr[j]<arr[minindex]){//For descending order condition could be reversed 
                minindex = j ;
            }

        }
        swap(arr[minindex],arr[i]);
    }
}


void Printarr(int arr[],int n){
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {3,15,7,9,10};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    Printarr(arr,n);
    return 0;

}