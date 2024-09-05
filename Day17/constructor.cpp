#include <iostream>
#include <string>
using namespace std;

//CONSTRUCTOR IS AUTOMATICALLT INTIALISED AT THE TIME OF OBJECT CREATION

//ONLY CALLED ONCE PER OBJECT

//CONSTRUCTOR COULD BE USED TO INTIALISE THE VALUES FOR SOME PROPERTIES IN CLASS

//YOU CAN CREATE MULTIPLE CONSTRUCTORS AND THE COMPILER WILL TAKE THE CONSTRUCTOR WILL THE NO OF PARAMETERS EQUAL TO THE PASSED ARGUMENTS

//CONSTRUCTOR IS DECLARED IN THE PUBLIC AREA OF THE CLASS



class Car{
    string name;
    string color;

public:
    Car(){ //CONSTRUCTOR DOES NOT RETURN ANY DATATYPE
        cout<<"Constructed without para \n";
    }



    Car(string name, string color){
        cout<<"Constructed with para \n";
        this->name = name; //this keyword is specially used in class to distinguish between arguments and class properties
        this->color = color;
    }


    string getname(){
        return name;
    }

    string getcolor(){
        return color;
    }

    

};


int main(){
    Car c1; //CONSTRUCTOR WILL BE ONLY ALLOCATED MEMORY HERE
    Car c2(" Audi R8"," Black");
    cout<<"Name :"<<c2.getname()<<endl;
    cout<<"Color :"<<c2.getcolor()<<endl;
}