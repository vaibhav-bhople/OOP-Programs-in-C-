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
    Rect r1;
    r1.draw();
    
}