#include <iostream>
using namespace std;

void numbercounter(int arr[][4],int n , int m , int num ){
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if (arr[i][j]==num){
                count+=1;

            }
        }
    }
    cout<<"THEN NUMBER OF " << num <<" IS : "<<count<<endl;
    
    
}

int main(){
    int arr[4][4] = {{1,7,3,4},
                    {5,6,7,7},
                    {7,10,11,12},
                    {13,7,15,16}};

    int n = 4 , m = 4 , num = 7;

    numbercounter(arr, n , m , num );
}