#include <iostream>
#include <string>
using namespace std;

class User{
    int id;
    string pass;

public:
    User(int id){
        this->id = id;
    }
    string username;

    void Setpass(string pass){
        this->pass = pass;
    }

    string Getpass(){
        return pass;
    }

};

int main(){
    User u1(123);
    u1.Setpass("abc");
    cout<<u1.Getpass();
}