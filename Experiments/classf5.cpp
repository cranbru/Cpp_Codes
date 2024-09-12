#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string name,color;
    int seater;
    Car(){
        
    }
    void details(){
        cout<<"THE NAME IS : "<<this->name<<endl;
        cout<<"THE COLOR IS  : "<<this->color<<endl;
        cout<<"THE AMOUNT OF SEATS IS : "<<this->seater<<endl;
    }
};



int main(){
    Car c1 ;
    c1.name = "AUDI R8";
    c1.color = "BLACK";
    c1.seater = 2;
    c1.details();
}