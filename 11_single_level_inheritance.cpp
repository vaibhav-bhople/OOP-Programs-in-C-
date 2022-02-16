#include<iostream>
using namespace std;

class Student{
    public:
    int r_no;
    string name;
    
    void study(){
        cout<<"Studying..\n"; 
    }
    
};

class Library : public Student{
    public:
    string b_name;
    void read(){
        cout<<"reading...\n";
    }
    
    void  accept(int r,string n,string b){
        r_no = r;
        name = n;
        b_name = b;
        
    }
    
    void display(){
        cout<<r_no<<"\t"<<name<<"\t"<<b_name<<"\n";
    }
};

main(){
    Library l1;
    l1.accept(11,"vb","c");
    l1.display();
    l1.study();
    l1.read();
}