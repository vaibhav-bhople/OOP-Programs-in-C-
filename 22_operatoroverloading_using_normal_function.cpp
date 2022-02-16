//program to overload binary operator (using normal member function operator)...

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
    
    void operator +(OpOverloading);
};

void OpOverloading :: operator +(OpOverloading o2){
    c = a + o2.a;
    cout<<c;
}

main(){
    
    OpOverloading o1;
    OpOverloading o2(20);
    OpOverloading o3(30);
    o1+o2;
    cout<<"\n";
    o2+o3;
    cout<<"\n";
    o1+o3;
    cout<<"\n";
    int d=10;
    o2+d;
}