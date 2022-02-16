#include <iostream>
using namespace std;

class Mother{
    public:
    string language;
    void m1(){
        cout<<"m1 method called...\n";
    }
};

class Father{
    public:
    int height;
    void m2(){
        cout<<"m2 method called...\n";
    }
};

class Son : public Mother, public Father{
    public:
    string name;
    void get(string l,int h,string n){
        language = l;
        height = h;
        name = n;
    }
    void display(){
        cout<<"Language - "<<language<<endl;
        cout<<"Height - "<<height<<endl;
        cout<<"Name - "<<name<<endl;
    }
};

main(){
    Son s1;
    s1.m1();
    s1.m2();
    s1.get("Marathi",5,"Vaibhav");
    s1.display();
}
