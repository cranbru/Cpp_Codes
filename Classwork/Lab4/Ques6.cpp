#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 2,m=-2;
    cout<<"Sqrt func on "<<n<<" = "<<sqrt(n)<<endl;
    cout<<"Pow func on "<<m<<" raised to power "<<n<<" = "<<pow(m,n)<<endl;
    cout<<"abs func on "<<m<<" = "<<abs(m)<<endl;
    cout<<"fmax func on "<<n<<" and "<<m<<" = "<<fmax(m,n)<<endl;
    cout<<"fmin func on "<<n<<" and "<<m<<" = "<<fmin(m,n)<<endl;  
    return 0;
}