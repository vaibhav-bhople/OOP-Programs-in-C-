#include <iostream>
using namespace std;

class Operation{
    public:
    int a,b;
    
    void add(int a, int b);
    void sub(int a, int b);
    
};

inline void Operation :: add(int a, int b){
    this -> a = a;
    this -> b = b;
    cout<<"a + b = "<<a+b<<endl;
}

inline void Operation :: sub(int a, int b){
    this -> a = a;
    this -> b = b;
    cout<<"a - b = "<<a-b<<endl;
}

int main()
{
    Operation o1;
    o1.add(4,5);
    o1.sub(10,6);
}
