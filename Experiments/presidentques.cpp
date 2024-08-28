#include <iostream>
using namespace std;

//I WAS WRONG THIS QUESTION COULD BE DONE IN 3 DECISION BOXES , WHILE I TOOK MORE DECISION BOXES :O  :(

int big (int n1 , int n2 , int n3 , int n4){
    int fresult = 0 ;
    if(n1>n2){
        fresult = n1;
    }
    else{
        fresult = n2;
    }


    if(fresult>n3){}
    else{
        fresult=n3;
    }


    if(fresult>n4){}
    else{
        fresult = n4;
    }

    return(fresult);
}

int main(){
    cout<<big(4,11,1,8)<<endl;
}