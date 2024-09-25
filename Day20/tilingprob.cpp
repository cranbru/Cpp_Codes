#include <iostream>
using namespace std;

int waystotile(int n){
    if(n==1 || n==0){//TRICKY PART IS N==0 
        return 1;
    }
    return (waystotile(n-1)+waystotile(n-2));

}


int main() {
    int n =4;
    cout<<waystotile(n);
    return 0;
}