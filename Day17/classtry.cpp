#include <iostream>
using namespace std;

//CLASSES ARE NOT LIKE FUNCTIONS NEITHER THEIR SYNTAX 

// BY DEFAULT EVERY CLASS IS PRIVATE

class Student{ //UPPERCASE FIRST LETTER IS A COMMON PRACTICE 
public:

    //PROPERTIES
    string abc ; 
    float gpa;

    //METHODS   
    void getpercentage(){
        cout<<(gpa*10)<<endl;
    }

};// SEMICOLON IS IMP

int main(){
    Student s1;  //NOW S1 VARIABLE IS OF TYPE "STUDENT".... STUDENT--> CLASS.... s1-->OBJECT
    cout<<sizeof(s1)<<endl;// 32 ... WHERE SOME OF IT IS STRING AND THE REST FLOAT AND ADDITIONAL DATA
}