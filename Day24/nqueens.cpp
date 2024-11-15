#include <iostream>
#include <vector>
using namespace std;

bool issafe(vector <vector <char>> v1,int m ,int n){
    for(int i =0;i<m;i++){
        if(v1[i][n]=='Q'){
            return false;
        }
    }
    for(int i = m , j=n;i>=0 && j>=0;i--,j--){
        if(v1[i][j]=='Q'){
            return false;
        }
    }

    for(int i = m,j=n;i>=0 && j<v1.size();i--,j++){
        if(v1[i][j]=='Q'){
            return false;
        }
    }
    return true;

}



void Printmatrix(vector <vector <char>> v1){
    for(int i =0;i<v1.size();i++){
        for(int j =0;j<v1.size();j++){
            cout<<v1[i][j]<<" ";
        }
        cout<< endl;
    }
    cout<<endl;

    
}



void nqueens(vector <vector <char>> &v1,int nrow){
    if(nrow>=v1.size()){
        Printmatrix(v1);
        return;
    }
    for(int j = 0 ;j<v1.size();j++){
        if(issafe(v1,nrow,j)){
            v1[nrow][j]='Q';
            nqueens(v1,nrow+1);
            v1[nrow][j]='.';
        }
        
    }
}


int main() {
    vector <vector <char>> v1 = {{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'}};
    nqueens(v1,0);
   
    return 0;
}