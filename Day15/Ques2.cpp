#include <iostream>
#include <vector>
using namespace std;

int maxareafunc(vector <int>  height){
    int left = 0 ;
    int right = height.size()-1;
    int maxarea = 0 ;
   

    while(right>left){
        int area  = (right-left)*min(height[right],height[left]);
        maxarea = max(maxarea,area);

        if(height[right]>height[left]){//SINCE NO OTHER HEIGHTS CAN BEAT THIS AREA IN WIDTH , SO WE ARE TRYING TO BEAT IN HEIGHT
            left++;
        }
        else{
            right--;//MADE AN LOGICAL ERROR WROTE right++ instead of right--
        }
    }

    return maxarea;

}

int main(){
    vector <int> vec1 = {1,8,6,2,5,4,8,3,7};
    cout<<maxareafunc(vec1);


    
}