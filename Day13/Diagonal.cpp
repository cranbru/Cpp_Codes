#include <iostream>
using namespace std;

void Diagon(int arr[][4],int n , int m){
    int sum = 0 ;

    for(int i = 0 ; i < n ; i++){
        sum+=arr[i][i];

    
    }
    for(int j = 0 ; j<m ;j++){
        if(j)
    }
    cout<<sum;


}

int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4 ; int m =4;
    Diagon(arr,n,m);
    return 0;
}