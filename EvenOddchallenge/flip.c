#include <stdio.h>
#include <stdbool.h>//BOOLEAN DATATYPE IS NOT PRESENT BY DEFUALT


int main(){
    int num = 7;
    bool flipper = false;

    for(int i =0 ;i<=num;i++){
        flipper=!flipper;
    }

    if(flipper){
        printf("NUMBER IS EVEN \n");

    }
    else{
        printf("NUMBER IS ODD \n");
    }

}