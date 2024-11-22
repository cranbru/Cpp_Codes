#include <iostream>
#include <vector>
using namespace std;


void stackprint(vector <int> vec){
    for(int i =vec.size()-1;i>=0;i--){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}


void pushatbottom(vector <int> &vec,int val){

    if(vec.size()==0){
        vec.push_back(val);
        return;
    }

    int temp = vec[vec.size()-1];
    vec.pop_back();
    pushatbottom(vec,val);
    vec.push_back(temp);

}




int main(){
    vector <int> vec = {1,5,4,2,7,9};
    int val =3;
    stackprint(vec);
    pushatbottom(vec,val);
    stackprint(vec);
    return 0;
}