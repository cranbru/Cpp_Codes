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
    vector <int> vec2 = {1,2,3,4};  //A VECTOR OF SIZE 4 //AN ERROR IS COMING HERE IF WE DONT USE -std=c++11
    vector <int> vec3(15,-1);  //A VECTOR OF SIZE 15 IN WITH ALL VALUES ARE INTIALISED BY -1
    
    cout<<vec2.size()<<"\n";//4
    cout<<vec2.capacity()<<"\n";//4

    vec2.push_back(4);//ADDS A ELEMENT 4 AND THE CAPACITY WILL GET DOUBLED
    cout<<vec2.size()<<"\n";//5
    cout<<vec2.capacity()<<"\n";//8

    vec2.pop_back();//DELETES THE LAST ELEMENT 

    //VECTOR IS KIND OF LIFO :- LAST IN FIRST OUT

    cout<<vec2.size()<<"\n";//4
    cout<<vec2.capacity()<<"\n";//8

    //CAPACITY WILL STAY A

    //WHILE DOUBLING THE CAPACITY O(n) TC TAKES PLACE , BUT IN AVERAGE O(1) ie Linear TC is considered because you dont double everytime you add an element
}