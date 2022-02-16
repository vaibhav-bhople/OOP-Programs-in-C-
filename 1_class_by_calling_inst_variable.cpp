/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class Student
{   
    public:
    string name;
    int rn;
    float marks;
    
};

main(){
    
    Student s1,s2;
    s1.name = "vaibhav";
    s1.rn = 8;
    s1.marks = 78.89;
    
    s2.name = "Nitin";
    s2.rn = 9;
    s2.marks = 89.87;
    
    cout<<"name = "<< s1.name<< endl<<"roll no = "<< s1.rn<< endl<<"marks = "<< s1.marks<< endl << endl;
    
    cout<<"name = "<< s2.name<< endl<<"roll no = "<< s2.rn<< endl<<"marks = "<< s2.marks<< endl;
}