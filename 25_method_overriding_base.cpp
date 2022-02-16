#include <iostream>
using namespace std;

class Shape{
    public:
  void draw(){
      cout<<"base class method called..\n";
  }  
};

class Rect : public Shape{
    public:
    void draw(){
        cout<<"Derived class method called..\n";
    }
};


main(){
    Shape *s1;
    Rect r1;
    s1 = &r1;
    s1 -> draw();
    
}