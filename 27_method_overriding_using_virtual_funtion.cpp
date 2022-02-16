#include <iostream>
using namespace std;

class Base{
    public:
    virtual void b1(){
    cout<<"Base class method called...\n";
    }
};

class Derived: public Base{
    public:
    void b1(){
        cout<<"Derived class method called..\n";
    }
};

main(){
    Derived de1;
    de1.b1();
    
    Base *Ba1;
    Ba1 = &de1;
    Ba1 -> b1();
}