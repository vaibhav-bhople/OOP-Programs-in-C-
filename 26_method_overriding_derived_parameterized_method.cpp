#include <iostream>
using namespace std;

class Shape{
    public:
    int r;
    float PI;
  void draw(){
      cout<<"base class method called..\n";
  }  
};

class Rect : public Shape{
    public:
    void area(int r,float PI){
        this -> r=r;
        this -> PI =PI;
        float area = r*r*PI;
        cout<<"area of the circle = "<<area<<"\n";
    }
};


main(){
    Rect r1;
    r1.area(10,3.14);
    
}