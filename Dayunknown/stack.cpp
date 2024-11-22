#include <iostream>
#include <vector>
using namespace std;


class Stack{

vector <int> s;

public:
void top(){
    int lastind = s.size()-1;
    cout<<s[lastind]<<endl;
}

bool isEmpty(){
    if(s.size()==0){
        return true;
    }
    return false;
}

void pop(){
    if(!isEmpty()){
        s.pop_back();
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }
    
}

void push(int val){
    s.push_back(val);
}




};



int main() {
    Stack s;
    s.push(5);
    s.push(6);
    s.push(1);
    s.push(7);
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.top();
    s.pop();
    s.top();
    s.pop();
    return 0;
}