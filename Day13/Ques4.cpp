#include <iostream>
using namespace std;

void DAconverter(int arr[], int n, int row ,int column){
    if(row*column<n){
        cout<<"Dimensions too small";
        return;
    }
    int narr[row][column];
    int index = 0 ; 
    for(int i = 0 ;i<row ; i++){
        for(int j = 0 ; j<column;j++ ){
            narr[i][j]=arr[index++];
        }
    }
    for(int i = 0 ;i<row ; i++){
        for(int j = 0 ; j<column;j++ ){
            cout<<narr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {8,14,12,1};
    int row = 1 , column = 1;
    
    DAconverter(arr,sizeof(arr)/sizeof(int), row, column);

}