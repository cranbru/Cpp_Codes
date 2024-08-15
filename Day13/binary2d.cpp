#include <iostream>
using namespace std;

// m > logm , total TC would be either nlogm or mlogn both smaller values than n*m/m*n

void binary(int arr[][4],int n , int m , int key){
    for(int i = 0 ; i<n; i++){
        int start = 0;
        int end = m-1;
        while(end>=start){
            int mid = (start+end)/2;
            if(key==arr[i][mid]){
                cout<<i<<" "<<mid<<endl;
                return;
            }
            else if(key>arr[i][mid]){
                start = mid+1;
            }
            else if(key<arr[i][mid]){
                end = mid-1;
            }
        }

    }
    cout<<"KEY NOT FOUND"<<endl;
}

int main(){
     int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};

    int n = 4 , m = 4 , key = 12;
    binary(arr,n,m,key);
}
