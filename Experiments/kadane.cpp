#include <iostream>
#include <vector>
using namespace std;

int kadane(vector <int> arr){
    int currvalue=0 , maxvalue = INT_MIN;
    
    for(int i = 0 ; i<arr.size();i++){
        currvalue+=arr[i];

        if(currvalue>maxvalue){
            maxvalue= currvalue; 
        }

        if(currvalue<0){
            currvalue=0;
        }
    }
    return maxvalue;
 
}

int main(){
    vector<int> arr = {2,14,51,-2,5,22,11};
    cout<<kadane(arr)<<endl;
    return 0;
}