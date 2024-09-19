#include <iostream>
using namespace std;

int Binarysearch(int arr[],int target,int start,int end){
    int mid=start+(end-start)/2;

    if(start>end){
        return -1;
    }

    if(target==arr[mid]){
        return(mid);
    }

    if(target>arr[mid]){
        start=mid+1;
    }

    else{
        end=mid-1;
    }

    return Binarysearch(arr,target,start,end);
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int target = 47;
    int n = sizeof(arr1)/sizeof(int);
    cout<<Binarysearch(arr1,target,0,n-1)<<endl;
    return 0;
}