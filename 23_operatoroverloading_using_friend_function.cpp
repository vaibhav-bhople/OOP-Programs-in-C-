//program to overload binary operator (using friend function operator)...

#include <iostream>
using namespace std;

class OpOverloading{
    public:
    int a;
    int c;
    OpOverloading(){
        a=10;
    }
    OpOverloading(int a){
        this -> a = a;
    }
    private:
    friend void operator +(OpOverloading);
};

void operator +(OpOverloading o1, OpOverloading o2){
    int c = o1.a + o2.a;
    cout<<c;
}

main(){
    
    OpOverloading o1;
    OpOverloading o2(20);
    OpOverloading o3(30);
    o1+o2;
    cout<<"\n";
    o2 + o3;
  
}