#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("ENTER THE COEFFICIENTS IN DESC ORDER OF POWER \n");
    scanf("%d%d%d",&a,&b,&c);
    float D = (b*b)-4*a*c;
    if(!(D>=0)){
        printf("IMAGINERY ROOTS \n");
        return 0;
    }
    printf("ROOTS ARE %.1f AND %.1f ",((-b+(sqrt(D)))/2*a),(-b-(sqrt(D)))/2*a);
    return 0;
}