#include<iostream>
using namespace std;
//++     prefix ++i () ,  postfix i++ (int)
class Incr{
  public:
    int a;
    Incr(int a){
      this -> a = a;
    }
    
   void operator ++(  );//prefix
    void operator ++( int a ); //postfix
    
};

void Incr :: operator ++() {
    int c=++a;
    cout<<c<<endl;
}

void Incr :: operator ++(int) {
    
    int c=a++;
    cout<<c<<endl;
}

main(){
    Incr i1(10);
    ++i1;//11
    i1++;
    
}