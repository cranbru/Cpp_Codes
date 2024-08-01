#include <iostream>
using namespace std;

int main(){
    float PI = 3.14;
    int radius;

    cout<<"Enter the radius : ";
    cin>>radius;

    float area = PI*radius*radius;

    cout<<"Your desired area is : "<<area<<endl;

    return 0;
}