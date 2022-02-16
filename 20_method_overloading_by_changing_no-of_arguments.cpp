//POLYMORPHISM//
//method_overloading (same method having different number of arguments...)

#include<iostream>
using namespace std;

class A{
    public:
    int a,b,c,d;
    void sum(){
        cout<<"empty method"<<endl;
    }
    void sum(int a,int b){
        this -> a=a;
        this -> b=b;
        cout<<"a + b = "<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        this -> a=a;
        this -> b=b;
        this -> c=c;
        cout<<"a + b + c = "<<a+b+c<<endl;
    }
    void sum(int a,int b,int c,int d){
        this -> a=a;
        this -> b=b;
        this -> c=c;
        this -> d=d;
        cout<<"a + b + c + d = "<<a+b+c+d<<endl;
    }
};

main(){
    A a1;
    a1.sum();
    a1.sum(2,3);
    a1.sum(4,5,6);
    a1.sum(4,5,6,7);
}