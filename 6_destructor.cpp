//destructor is used to deallocate the memory of object initialized by the contructor..!
//only one destructor is present in one program 
//destructor is by default public in the class unlike contructors(they are private...)

#include<iostream>
using namespace std;


class Book{
	public:
 	string name;
	int price;	
	
	Book(){
		name = "book_1";
		price=390;	
	}
	
	Book(const  Book&b1){				//copy contructor syntax--> class_name(const class_name &old_object){...}
		name  = b1.name;
		price = b1.price;
	}
	
	display(){
		cout<<"name - "<<name<<endl;
		cout<<"price - "<<price<<endl;
	}
	
	~ Book(){					//destructor syntax --> ~ class_name(){...}
		cout<<"destructor called...\n";
		}
	
};

main(){
	cout<<"\n\nThe following values are of default constructor...\n";
	Book b1;
	b1.display();
	
	cout<<"\n\nThe following values are of copy constructor...\n";
	Book b2=b1;
	b2.display();
	cout<<endl;
}