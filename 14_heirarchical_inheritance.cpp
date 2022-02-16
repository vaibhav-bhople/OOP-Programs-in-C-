#include <iostream>
using namespace std;

class Shape{
    public:
    int length;
    public:
    void area(int l){
        length = l;
        cout<<"Area of square - "<<length * length<<endl;
    }
};

class Rect : public Shape{
    public:
    int width;
    
    void rectArea(int w){
        width = w;
        cout<<"Area of rectangle - "<<length * width<<endl;
    }
};

class Box : public Shape{
    public:
    int width;
    int height;
    
    void volume(int w,int h){
        width = w;
        height = h;
        cout<<"Voulume of box - "<<length * width * height<<endl;
        
    }
};

main(){
    Rect r1;
    r1.area(10);
    r1.rectArea(15);
    
    Box b1;
    b1.area(5);
    b1.volume(10,10);
}
