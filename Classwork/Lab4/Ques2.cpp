#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int fact = 1;
    for(int i =x ;i>0;i--){
        fact =fact*i;
    }
    cout<<"The factorial is "<<fact;
    return 0;
}