#include <iostream>
using namespace std;

int main(){
    char ch = 'A';// \n could also be stored , \n is a recognised as a single character 
    cout<< int(ch)<<endl;

    char strliteral[6] ={'c','o','d','e','\0','9'} ;// 9 WON'T BE PRINTED
    cout<<strliteral<<endl;
    //WITH NULL CHAR OUTPUT  = code ,,,, WITHOUT code??, ?? CAUSE IT DIDN'T KNEW IT WAS OVER  . THE QUESTION MARK THING WAS NOT SHOWING UP IDK WHY
    //WHEN MEANT TO STORE A MEANINGFULL STRING ADD A \0 NULL CHAR(ASCII VALUE = 0)

    char str[] = "code";//Automatically adds /0 (NULL CHARACTER)
    cout << sizeof(str)<<endl;//SIZE = 5 ... THIS IS COUNTING THE NULL CHARACTER
    cout<<strlen(str)<<endl;// THIS WON'T TAKE NULL CHARACTER INTO ACCOUNT
    



}