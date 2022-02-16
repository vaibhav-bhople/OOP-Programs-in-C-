//POLYMORPHISM//
//method_overloading (same method having different type of arguments...)

#include<iostream>
using namespace std;

class A{
    public:
    int a,b;
    void sum(){
        cout<<"empty method"<<endl;
    }
    void sum(int a,int b){
        this -> a=a;
        this -> b=b;
        cout<<"a + b = "<<a+b<<endl;
    }
    void sum(int a,double b){
        this -> a=a;
        this -> b=b;
        cout<<"a + b  = "<<a+b<<endl;
    }
    void sum(double a,double b){
        this -> a=a;
        this -> b=b;
        cout<<"a + b = "<<a+b<<endl;
    }
};

main(){
    A a1;
    a1.sum();
    a1.sum(2,3);
    a1.sum(4,5.34);
    a1.sum(4.34,5.34);
}