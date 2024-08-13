#include <iostream>
using namespace std;

//THIS IS THE CODE TO PRINT ALL THE ELEMENTS OF A SQUARE MATRIX IN A SPIRAL FASHION
//YOU CAN IMAGINE THE IN A FORM OF A JALEBI 
//NO ELEMENTS SHALL REAPEAT 
//THE PATTERN IS LIKE TOP-->RIGHT-->BOTTOM-->LEFT


void Spiral(int arr[][4], int n , int m ){

    
    int startrow = 0 , startcolumn = 0 ;
    int endrow = m-1  , endcolumn = n-1;

    while(endrow>=startrow && endcolumn>=endrow){
            for(int j = startcolumn ; j<endcolumn+1 ;j++){
            cout<<arr[startrow][j]<<' ';      
            }


        //RIGHT
        for(int i = startrow+1 ; i <endrow+1 ; i++){
            cout<<arr[i][endcolumn]<<" ";
        }


        //BOTTOM

        for(int j = endcolumn-1 ; j>=startcolumn ;j--){
            cout<<arr[endrow][j]<<' ';      
            }

        //LEFT
    
        for(int i = endrow-1 ; i >startrow ; i--){
            cout<<arr[i][startcolumn]<<" ";
        }


        startcolumn++,startrow++;//WE CAN USE BOTH COMMAS AND SEMICOLON IN SEPERATING THESE TWO OPERATIONS startcolum++ , startrow++     ==   startcolum++ ; startrow++
        endrow--,endcolumn--;

    }

}

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    
    int n = 4 , m = 4 ;

    Spiral(arr ,n , m);

    return 0 ;
}