#include <iostream>
using namespace std;

int main() {
    int arr[5]=  {12,155,61,6,7};
    int maxi = INT8_MIN;
    int n = sizeof(arr)/sizeof(int);
    for(int i =0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    cout<<"THE MAXIMUM IS : "<<maxi;
    return 0;
}