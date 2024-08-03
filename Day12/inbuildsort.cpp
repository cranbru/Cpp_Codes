#include <iostream>
#include <algorithm>//Algorithm library includes the SORT function 
using namespace std;

void print(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; //Add a newline for better readability  
}

int main(){
    int arr[7] = {5,6,11,77,22,1,8};
    int n = sizeof(arr)/sizeof(int);
    print(arr,n);

    sort(arr,arr+n);//plus 'n' is used instead of n-1 because then it would not include the last element('n-1'th), it is like the range funtion of python 
    print(arr,n);

    sort(arr,arr+n,greater<int>());//This ""greater<int>()"" makes the array sort in descending order
    print(arr,n);
    
    //BTW this SORT func is used in multiple data types including vectors
    return 0 ;
}