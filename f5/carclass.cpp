#include <iostream>
using namespace std;

class Car{

public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
    Car(){
        brand = "Ford";
        model = "Mustang";
        year = 1969;
    }
    void print(){
        cout << brand << " " << model << " " << year << endl;
    }

};











int main() {
    Car car1("BMW", "X5", 1999);
    car1.print();

    return 0;
}