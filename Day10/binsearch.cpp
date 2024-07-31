#include <iostream>
using namespace std ;

int bins(int *arr , int n , int key){
    int str = 0 ;
    int end = n-1;
    while(str<=end){
        int mid = (str + end)/2;

        if (arr[mid]==key){
            return mid ; 
        }

        else if(arr[mid]<key){
            str = mid+1;

        }
        
        else{
            end = mid-1;
        } 
    }
    return -1;

}



int lins(int *arr , int n , int key){
    for(int i = 0 ;i<n  ; i++ ){
        if(arr[i]==key){
            return i ; 
        }
    }
    return -1 ; 

}

int main(){ 

    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67};
    int n = sizeof(arr)/sizeof(int);
    int key = 62;
    cout<<bins(arr,n,key)<<endl;
    cout<<lins(arr,n,key)<<endl;
    return 0 ;

}