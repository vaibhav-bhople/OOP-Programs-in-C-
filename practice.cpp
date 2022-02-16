#include<iostream>
using namespace std;

class X{
	private:
	int a,b,c;
	
	friend void display(X x1);
	
	public:
	void accept(int a,int b,int c){
	    this -> a=a;
	    this -> b=b;
	    this -> c=c;
	    
	}
};

void display(X x1){
	cout<<"a=  "<<x1.a<<endl;
	cout<<"b=  "<<x1.b<<endl;
	cout<<"c=  "<<x1.c<<endl;
}

main(){
	X x1;
	x1.accept(2,34,45);
	display(x1);
}