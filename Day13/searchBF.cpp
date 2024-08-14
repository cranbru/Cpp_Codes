#include <iostream>
using namespace std;

//THIS IS BRUTE FORCE APPROACH ,BAD TC(FOR SQUARE MATRIX N^2 )
//THIS CODE ALSO DOES NOT TAKE ACCOUNT THAT THEIR COULD BE MULTIPLE ENTRIES OF A SPECIFIC KEY 


void BF(int arr[][4] , int n , int m, int key ){
    for(int i =0 ; i <n ; i++){
        for(int j = 0 ; j<m ; j++){
            if(arr[i][j]==key){
                cout<<"LOCATION : "<<i<<" "<<j<<endl;
                return;// I DIDN'T KNEW HOW TO TERMINATE A VOID FUNCTION AND THIS IS HOW
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

    int n = 4 , m = 4 , key = 129;
    
    BF(arr , n , m , key);

}