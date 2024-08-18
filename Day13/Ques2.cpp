#include <iostream>
using namespace std;


void sum(int arr[][4],int n , int m , int row){
    int sum =0 ; 
    for(int i = row-1 ; i<row ; i++){
        for(int j = 0 ; j<m ;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"THE SUM OF THE SECOND ROW IS : "<<sum;   
}

int main(){
    int arr[4][4] = {{1,7,3,4},
                    {5,6,7,7},
                    {7,10,11,12},
                    {13,7,15,16}};

    int n = 4 , m = 4 ,row = 2 ;

    sum(arr, n , m, row );
}