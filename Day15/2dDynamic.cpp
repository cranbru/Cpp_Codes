#include <iostream>
using namespace std;

//THEORECTICAL IT IS NOT POSSIBLE , BUT WE WILL COMBINE MULTIPLE 1D ARRAYS 

//WE HAVE TO CREATE AN ARRAY POINTER OF ARRAY POINTERS 

// AND WHEN WE CREATE 2d ARRAY THIS WAY , ONE IMP POINT IS THAT THERE IS BREAKING POINTS IN ROWS SO THEY ARE NOT CONTIGUOUS 

//SO OUR DATA WILL BE SEGREGATED

//AND EVERYTHING IS CREATED IN HEAP MEMORY

//matrix[i][j] = *(*(martix+i)+j) SO IT IS STILL ACESSIBLE BY [i][j]


int main(){

    int rows = 4 ,columns = 3;

    int* *martix = new int *[rows]; //DATA TYPE'S SHOULD MATCH 

    for(int i = 0 ; i<rows ; i++){
        martix[i]=new int[columns];
    }

    int x =1 ;

    for(int i =0 ; i<rows ; i++){
        for(int j = 0 ;j<columns;j++){
            martix[i][j]=x++;
            cout<<martix[i][j]<<" ";
        }
        cout << endl;
        
    }

}