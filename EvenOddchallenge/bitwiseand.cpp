// WORKS ON THE LOGIC THAT EVERY ODD NUMBER HAS ITS LSD(LAST SIGNIFICANT DIGIT ) AS 1

#include <iostream>
using namespace std;

int main() {
    int num = 6;
    if(num&1){
        cout<<"NUMBER IS ODD";
    }
    else{
        cout<<"NUMBER IS EVEN";
    }
    return 0;
}