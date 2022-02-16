//Copy contructor using parameterized contructor

#include<iostream>
using namespace std;


class Book{
	public:
 	string name;
	int price;	
	
	
	Book(string n,int p){
		name = n;
		price = p;
	}
	
	Book(const  Book&b1){				//copy contructor syntax--> class_name(const class_name &old_object){...}
		name  = b1.name;
		price = b1.price;
	}
	
	display(){
		cout<<"name - "<<name<<endl;
		cout<<"price - "<<price<<endl;
	}
};

main(){
	cout<<"The following values are of parameterixed constructor...\n";
	Book b1("Book1",650);
	b1.display();
	
	cout<<"\n\nThe following values are of copy constructor...\n";
	Book b2=b1;
	b2.display();
	
}