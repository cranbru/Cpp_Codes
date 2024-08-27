#include <iostream>  // YOU CAN ALSO INCLUDE MULTIPLE HEADER FILES BUT SOME COMPILERS HAVE SOME PROBLEM IN COMPILING THIS SO STANDARD PRACTICE IS TO USE SEPERATE LINES FOR CLARITY AND PRECAUTION
using namespace std;

//THIS CODE IS FOR PRINTING THE REVERSE OF ALL PRIMES UPTO N NUMBERS

int reversetheprimes(int num ){
    int reversed =0;
    
    while (num>0){
        reversed = reversed*10 + (num%10);//THIS IS COPIED FROM CGPT I WASN'T ABLE TO THINK THIS ON MY OWN
        num/=10;
    }

    return reversed;
}

int main(){
    
    int upto = 1000;
    for(int i = 2;i<=upto;i++){
        bool isprime = true;
        for(int j = 2 ; j<=sqrt(i);j++){
            if(i%j==0){
                isprime = false;
                break;
            }
        }
        if(isprime){
           cout<<reversetheprimes(i)<<" ";
        }
    }
}