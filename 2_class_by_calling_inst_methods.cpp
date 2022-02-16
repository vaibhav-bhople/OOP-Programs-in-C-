/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Student
{   
    public:
    string name;
    int rn;
    float marks;
    
    void accept(string n,int r,float m){
        name = n;
        rn = r;
        marks = m;
    }
    
    void display(){
        cout<<"name of student = "<<name<< endl;
        cout<<"roll no. of student = "<<rn<< endl;
        cout<<"marks of student = "<<marks<< endl<< endl;
    }
    
};


main()
{
    Student s1,s2,s3;
    s1.accept("vaibhav",10,87.98);
    s1.display();
    
    s2.accept("nitin",11,91.87);
    s2.display();
    
    s3.accept("Rushi",12, 87.97);
    s3.display();
    
}
