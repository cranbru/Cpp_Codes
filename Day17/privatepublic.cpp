#include <iostream>
using namespace std;

//BY DEFAULT EVERYTHING IS PRIVATE MEANS WE CANNOT CHANGE THE VALUE OR HAVE THE VALUE
//PRACTICAL USE CASE IS MAKING PASSWORD PROPERTY OF A CLASS PRIVATE, THAT WAY ONLY THE CLASS ITSELF CAN ACCESS IT 

class Student{
    string name;
public:
    float cgpa;

    void getpercentage(){
        cout<<cgpa*10<<"%"<<endl;
    }
};

int main(){
    Student s1;
    s1.cgpa = 9.5;
    s1.getpercentage();
}