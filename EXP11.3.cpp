#include<iostream>
using namespace std;

class Cube {
    public:
    float calculate(float a, float b, float c){
        float vol=a*b*c;
        return vol;
    }
    float display(float a){
        cout<<"Volume of cuboid = "<<a;
    }
};

int main() {
    Cube c1;
    float h, b, l;
    cout<<"Enter length, breadth and height: ";
    cin>>l>>b>>h;
    float vol=c1.calculate(l,b,h);
    c1.display(vol);
}
