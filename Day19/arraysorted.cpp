#include <iostream>
using namespace std;

bool sort(int arr[],int n,int i = 0){
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }
    return sort(arr,n,++i);

}

int main() {
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<sort(arr,n);
    return 0;
}