#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> height ={1,1};
    int left = 0 ,right = height.size()-1;
    int minheight =min(height[left],height[right]);
    int maxarea = (right-left)*minheight;


    while(right>left){
        if(height[left]>height[right]){
            right--;
        }
        else{
            left++;
        }
        int area = (right-left)*(min(height[left],height[right]));
        if(area>maxarea){
            maxarea=area;
        }
    }

    cout<<"MAX AREA IS : "<<maxarea<<endl;
    
    return 0;
}