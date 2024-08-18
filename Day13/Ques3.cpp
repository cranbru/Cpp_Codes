#include <iostream>
using namespace std;

//THIS CODE WILL GIVE THE TRANSPOSE OF A MATRIX
void Printarr(int arr[][2] , int nrow , int ncolumn){
    for(int i = 0 ; i<nrow ; i++){                   
        for(int j = 0 ; j<ncolumn ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposer(int arr[][3],int n , int m){
    int tarr[3][2];
    for(int j = 0 ;j<m;j++){
        for(int i = 0 ; i<n ; i++){
            tarr[j][i]=arr[i][j];
        }
        
    }
    Printarr(tarr,m,n);
}

int main(){

    int arr[2][3] = {{1,2,3},
                    {4,5,6}};

    int n = 2 , m = 3 ;
    transposer(arr,n,m);
    


}