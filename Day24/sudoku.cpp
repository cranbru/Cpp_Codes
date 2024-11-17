#include <iostream>
#include <vector>
using namespace std;

void Printboard(vector <vector <int>> vec ){
    for(int i = 0; i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            cout<<vec[i][j]<<" ";
            if((j+1)%3==0){
                cout<<"  ";
            }
        }
        cout<<endl;
        if((i+1)%3==0){
            cout<<endl;
        }
    }
}






bool isSafe(){
    
}






























int main() {
    vector <vector<int >> board = {{5, 3, 0, 0, 7, 0, 0, 0, 0},{6, 0, 0, 1, 9, 5, 0, 0, 0},{0, 9, 8, 0, 0, 0, 0, 6, 0},{8, 0, 0, 0, 6, 0, 0, 0, 3},{4, 0, 0, 8, 0, 3, 0, 0, 1},{7, 0, 0, 0, 2, 0, 0, 0, 6},{0, 6, 0, 0, 0, 0, 2, 8, 0},{0, 0, 0, 4, 1, 9, 0, 0, 5},{0, 0, 0, 0, 8, 0, 0, 7, 9}};
    
    Printboard(board);
    
    return 0;
}