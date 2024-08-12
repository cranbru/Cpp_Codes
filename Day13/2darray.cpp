#include <iostream>
using namespace std;


void Print2darray(int arr[][4],int n , int m ){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ;j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    
    int n = 4 , m = 4;

    Print2darray(arr,n,m);
    return 0;
}