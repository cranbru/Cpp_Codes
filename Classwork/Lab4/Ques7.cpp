#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char str1[15] = "cursor";
    char str2[] = "high";
    cout<<endl<<"String 1 is : "<<str1<<"\nString 2 is : "<<str2<<endl<<endl;



    cout<<"Result of strlen() func : "<<strlen(str1)<<endl;
    cout<<"String 1 is : "<<str1<<"\nString 2 is : "<<str2<<endl<<endl;



    cout<<"Result of strcat() func : "<<strcat(str1,str2)<<endl;
    cout<<"String 1 is : "<<str1<<"\nString 2 is : "<<str2<<endl<<endl;

    

    cout<<"Result of strcpy() func : "<<strcpy(str1,str2)<<endl;
    cout<<"String 1 is : "<<str1<<"\nString 2 is : "<<str2<<endl<<endl;


    cout<<"Result of strcmp() func : "<<strcmp(str1,str2)<<endl;
    cout<<"String 1 is : "<<str1<<"\nString 2 is : "<<str2<<endl;


    return 0;
}