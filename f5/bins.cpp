#include <iostream>
#include <vector>
using namespace std;

int bin(int v1[],int key,int n){
    int srt = v1[0];
    int end = v1[n-1];
    int ans=-1;
    while (end>srt){
        int mid=srt+(end-srt)/2;
        if(v1[mid]==key){
            ans= mid;
        }
        else if(v1[mid]>key){
            end = mid-1;
        }
        else{
            srt= mid+1;
        }
    }
    return ans;
}   





int main() {
    int v1[] = {1,4,6,7,9,11,13,17,44,55,67};
    int key =13;
    int n = sizeof(v1)/sizeof(int);
    cout<<bin(v1,key,n);

    return 0;
}
