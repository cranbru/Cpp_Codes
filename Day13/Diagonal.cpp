#include <iostream>
using namespace std;
//YEH CODE N*N TC SE N TC TAK OPTIMIZE HO SAKTA HAI BAAD MAI CODE LIKH DENA ISKA
void Diagon(int arr[][3],int n , int m){
    int sum = 0 ;

    for(int i = 0 ; i < n ; i++){
        sum+=arr[i][i];
        for(int j = 0 ; j<m ;j++){
            if(j==n-i-1 && j!=i){
                sum+=arr[i][j];
            }
    }
    
    }
    
    cout<<sum;


}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n = 3 ; int m =3;
    Diagon(arr,n,m);
    return 0;
}