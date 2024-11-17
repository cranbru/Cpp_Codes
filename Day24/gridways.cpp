#include <iostream>
using namespace std;


int gridways(int row,int col ,int n,int m){//n=4,m=5
    if(row>=n || col>=m){
        return 0;
    }
    if(row==(n-1) && col==(m-1)){
        return 1;
    }
    return gridways(row,col+1,n,m) + gridways(row+1,col,n,m);
    
}


int main() {
    cout<<gridways(0,0,4,5);
    return 0;
}