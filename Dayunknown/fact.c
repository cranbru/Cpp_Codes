#include <stdio.h>





int fact(int x){
    if(x==1 || x==0){
        return 1;
    }

    return x * fact(x-1);
}



int main(){
    int x = 0;
    printf("%d",fact(x));

    

    goto label;
    label:
        printf("hello");

}