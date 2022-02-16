#include <iostream>
using namespace std;

class B1{
    public:
    int a;
    void display(){             //concrete fucntion
        cout<<"Method calleed..\n";
    }
    
    virtual void show()= 0;     //pure virtual function
    
};

class B2 : public B1{
    public:
    void show(){
        cout<<"value of a = "<< a <<endl;
    }
};

main(){
    B2 obj;
    obj.a= 10;
    obj.show();
}
