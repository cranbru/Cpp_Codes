#include <iostream>
#include <string>
using namespace std;

// GETTERS AND SETTERS ARE USED TO INDIRECTLY ACCESS PRIVATE PROP OF A CLASS

class Student{

    string name;
    float cgpa;

public:
    //SETTERS
    void setName(string namein){
        name = namein;
    }

    void setcgpa(float cgpain){
        cgpa = cgpain;
    }

    //GETTERS
    string getname(){
        //cout<<name<<endl;
        return name;
    }

    float getcgpa(){
        return cgpa;
    }

};

int main(){
    Student s1;
    s1.setName("Cranbru");
    s1.setcgpa(4.9);

    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa()<<endl;
}