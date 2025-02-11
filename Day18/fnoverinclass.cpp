#include <iostream>
#include <string>
using namespace std;

//FUNCTION OVERLOADING (SAME CLASS)
//THIS IS COMPILE TIME OVERLOADING/POLYMORPHISM

class Print{
public:
    void show(int digit){
        cout<<"THE FUNC WITH INTEGER IS CALLED"<<endl;
    }
    void show(string quote){
        cout<<"THE FUNC WITH STRING IS CALLED"<<endl;
        
    }
};


int main(){
    Print p1;
    p1.show(6);
}