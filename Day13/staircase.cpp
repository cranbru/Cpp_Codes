#include <iostream>
using namespace std;

void stair(int arr[][4],int n , int m , int key){
    int row = 0, column = m-1;
    while(row<n && column>=0){
        int target = arr[row][column];
        if(key==target){
            cout<<row<<" "<<column<<endl;  
            return; 
        }
        else if(key>target){
            row++;
        }

        else if(key<target){
            column--;
        }
    }
    cout<<"NUMBER NOT FOUND";
}


int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};

    int n = 4 , m = 4 , key = 4;
    stair(arr,n,m,key);

}