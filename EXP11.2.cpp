#include<iostream>
using namespace std;

class Cube {
    private:
    float l=3.0, w=5.0, h=7.0;
    public:
    float calculate(){
        float vol=l*w*h;
        return vol;
    }
    float display(float a){
        cout<<"Volume of cuboid = "<<a;
    }
};

int main() {
    Cube c1;
    float vol=c1.calculate();
    c1.display(vol);
}
