#include <iostream>
using namespace std;

void Printarr(int *arr , int n){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblearr(int *arr , int n){
    for(int i =0 ;i<n-1; i++){ //You can also add a checker. If in the 1st outer loop iteration, no element is swapped that means it is already sorted.
        for(int j = 0 ;j<n-i-1  ; j++){
            if(arr[j]>arr[j+1]){  // FOR DESCENDING JUST '>' --- '<'
                swap(arr[j],arr[j+1]);
            }
            
        }
    }

}
int main(){

    int arr[5] = {5,4,1,3,2};
    int n= sizeof(arr)/sizeof(int);
    bubblearr(arr , n );
    Printarr( arr , n);
    
    return 0;
}