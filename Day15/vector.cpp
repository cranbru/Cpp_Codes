#include <iostream>
#include <vector>

//DYNAMIC AT RUNTIME LIKE DYNAMIC ARRAYS
//CONTIGUOUS AT RUNTIME
//AKA SEQUENCE CONTAINERS

//NOW FOR PRECAUTION INSTEAD OF G++/GCC <FILENAME> WE WILL USE G++/GCC -STD=C++11
//11 SIGNIFIES THE NEWER VERSION AND THIS WILL TELL COMPILER TO USE IT

//WHEN YOU TRY TO ACCESS AN ELEMENT OUT OF THE RANGE OF VECTOR IT WILL COUT GARBAGE VALUES
using namespace std;

int main(){
    vector <int> vec1;  // A VECTOR OF SIZE 0
    vector <int> vec2 ={1,2,3,4};  //A VECTOR OF SIZE 4
    vector <int> vec3(15,-1);  //A VECTOR OF SIZE 15 IN WITH ALL VALUES ARE INTIALISED BY -1
    // cout<<vec1.size()<<"\n";
    // cout<<vec2.size()<<"\n";
    // cout<<vec3.size()<<"\n";

    for(int i = 0 ; i<vec3.size();i++){
        cout<<vec3[i]<<" ";
    }
    cout<<endl;
}