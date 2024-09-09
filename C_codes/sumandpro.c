#include <stdio.h>


int sumofints(int a , int b){
    return(a+b);
}

float productoffloats(float a, float b){
    return(a*b);
}

int main(){
    printf("%d\n",sumofints(7,3)); // MISSED A \ AND WAS THINKING WHY MY CODE IS NOT WORKING :(
    printf("%f",productoffloats(3.13,123.12));
} 