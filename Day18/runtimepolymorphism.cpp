#include<iostream>
using namespace std;
//FUNTION OVERRIDING (DIFF CLASS)
// THIS  IS AN EXAMPLE OF RUNTIME POLYMORPHISM , CAUSE COMPILER DOES NOT KNOW WHICH HELLO TO USE 

class Parent{
public:
    void hello(){
        cout<<"HELLO FROM PARENT"<<endl;
    }
};

class Child : public Parent{
public:
    void hello(){
        cout<<"HELLO FROM CHILD"<<endl;
    }
};


int main(){
    Child c1;
    c1.hello();
    return 0;
}