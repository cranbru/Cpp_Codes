#include <iostream>
using namespace std;

//I THOUGHT THE CODE WASN'T WORKING BUT IT WAS JUST WAITING FOR INPUT

void Printarr(int arr[][3] , int nrow , int ncolumn){// The size of dimensions of a multidimensional array must be specified
    for(int i = 0 ; i<nrow ; i++){                   // To correctly compute the memory address of elements in the 2D array
        for(int j = 0 ; j<ncolumn ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Inputarr(int arr[][3], int nrow , int ncolumn){
    for(int i = 0; i<nrow ; i++){
        for(int j =0 ; j<ncolumn ; j++){//Made a typo instead of j<ncolumn i wrote i<ncolumn #CAREFUL
            cin>>arr[i][j];
        }
    }
}

int main(){
    int arr[3][3];
    int nrow = 3 , ncolumn = 3;
    Inputarr(arr,nrow,ncolumn);
    Printarr(arr,nrow,ncolumn);

    return 0;
}