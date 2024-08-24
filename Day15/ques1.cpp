#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[] = {1, 2, 2, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(int);

    vector <int> vec1(n+1,0);

    int arr1[2];
    
    for(int i = 0 ; i<n ; i++){
        vec1[arr[i]]++;
    }

    for(int i = 1; i<n+1; i++){
        if(vec1[i]>1){
            arr1[0]=i;
        }

        else if(vec1[i]==0){
            arr1[1]=i;
        }
        
    }
    cout<<"{"<<arr1[0]<<","<<arr1[1]<<"}"<<endl;

    
}






//SAMPLES TO TEST

//[1,2,2,4]


// [1, 2, 2, 4, 5]

// [1, 2, 3, 4, 4, 6]

// [1, 1, 3, 4]

// [1, 2, 3, 4, 5, 5, 7]

// [1, 3, 3]

// [1, 2, 2, 4, 5, 6, 7, 8]






