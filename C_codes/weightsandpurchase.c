#include <stdio.h>

int main(){
    float w1,w2,p1,p2;

    printf("Enter in the order w1,w2,p1 and p2 \n");

    scanf("%f %f %f %f",&w1,&w2,&p1,&p2);

    printf("The average is : %.2f",(w1*p1 + w2*p2)/(p1+p2));

    return 0;
}