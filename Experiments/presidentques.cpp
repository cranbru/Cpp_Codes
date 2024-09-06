#include <iostream>
using namespace std;

//I WAS WRONG THIS QUESTION COULD BE DONE IN 3 DECISION BOXES , WHILE I TOOK MORE DECISION BOXES :O  :(

int big (int n1 , int n2 , int n3 , int n4){
    int fresult = 0 ;
    fresult=(n1>n2?n1:n2);
    fresult=(n3>fresult?n3:fresult);
    fresult=(n4>fresult?n4:fresult);
    return(fresult);
}

int main(){
    cout<<big(4,11,111,8);
}