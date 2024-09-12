#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,18,17,6};
    int n = sizeof(arr)/sizeof(int);
    int left=0,right=(n-1);
    int maxarea = 0,currarea;

    while(right>left){
        currarea = (right-left)*(min(arr[left],arr[right]));
        if (currarea>maxarea){
            maxarea=currarea;
        }

        if(arr[right]>arr[left]){
            left++;
        }
        else{
            right--;
        }
    }

    cout<<"THE MAX AREA IS : "<<maxarea<<endl;
}