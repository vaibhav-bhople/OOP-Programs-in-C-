/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Book{
    public:
    int page;
    string name;
    static int mrp;
    
    Book(int page,string name){
        this -> page = page;
        this -> name = name;
    }
    
    void display(){
        cout<<"pages = "<<page<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"mrp = "<<mrp<<endl<<endl;
    }
    
    static void change(){           //static method for changing static variable value
        mrp = 1500;
    }
        
    ~Book(){
        cout<<"Destructor called"<<endl;
    }
};

int Book :: mrp = 1000;

main()
{
    Book b1(300,"book_1");
    b1.display();
    
    Book :: change();                   //value of static variable changed using static method
    
    Book b2(400,"book_2"),b3(500,"book_3");
    b2.display();
    b3.display();
    
    cout<<Book :: mrp<<endl;            //printing  static variable value 
    
}
