#include <iostream>
using namespace std;

int main(){
    float pencil;
    float pen;
    float eraser;

    cout<<"Enter Cost of Pencil : ";
    cin>>pencil;

    cout<<"Enter Cost of Pen : ";
    cin>>pen;
    
    cout<<"Enter Cost of Eraser : ";
    cin>>eraser;

    float net = (pencil+pen+eraser) + 0.18*(pencil+pen+eraser);

    cout<<"Your final amt inclusive of Gst (18%) : "<<net<<endl;

    return 0;
}