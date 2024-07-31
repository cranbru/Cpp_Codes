#include <iostream>
using namespace std;

void PrintArr(int *arr , int n ){
    for(int i=0 ;i<n ; i++){
        cout<<arr[i]<<' ';
    }




}

int main(){
    int arr[5] = {1,4,2,6,8};
    int n = sizeof(arr)/sizeof(int);
    int start= 0 ;
    int end = n-1 ;


    while(end>start){
        swap(arr[start],arr[end]);
        start+=1;
        end-=1;

    }

    PrintArr(arr,n);
    
    return 0 ;
}