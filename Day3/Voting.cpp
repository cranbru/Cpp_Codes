#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age of the candidate : \n "<<endl;
    cin>>age;

    if (age>18){
        cout<<"Candidate is eligible to vote \n";
    }else{
        cout<<"Not Eligible to vote, Bhaag yaha se \n";
    }

    if (age>35){
        cout<<"You are eligible to fight election";
    }else{
        cout<<"You are not eligible to fight election, Dhoodh piyo beta abhi";
    }
}