#include<iostream>
using namespace std;

class Country{			//class declaration
	public:				//by default instance variables are private so we have to make then public to use in our main function 
	string name;
	int states;
	float literacy;
	
	Country(){			//default constructor or parameterized constructor or o arguement constructor...
		name = "India";
		states = 36;
		literacy = 70.87;
	}
	
	Country(string name,int states,float literacy){				//parameterized constructor...
		this -> name = name;
		this -> states = states;
		this -> literacy = literacy;
	}
	
	void accept(string name,int states,float literacy){			//accept function for acceptinng inputs...
		this -> name = name;
		this -> states = states;
		this -> literacy = literacy;
	}
	
	void display(){				//defining display method inside the class for showing the data using objects in main function..
	
		cout<<"\t -> \t"<<"Name of country - "<<name<<endl;
		cout<<"\t -> \t"<<"Number of states - "<<states<<endl;
		cout<<"\t -> \t"<<"Literacy percentage - "<<literacy<<endl<<endl;
	}
	
	void show_data();		    //initializing show_data function which works exactly same as display()..
	
};

void Country :: show_data(){		//defining show_data() outside the class using scope resolution operator..
		cout<<"\t -> \t"<<"Name of country - "<<name<<endl;
		cout<<"\t -> \t"<<"Number of states - "<<states<<endl;
		cout<<"\t -> \t"<<"Literacy percentage - "<<literacy<<endl<<endl;
}

main(){
		cout<<"\n\n"<<"--------------------------------------------------------\n\n";
		
		Country c1;			//creating object using default constructor
		c1.display();		//using display method to display data
		
		Country c2("France",27,82.56),c3("Italy",43,87.65);     //creating multiple objects using parameterized constructor..
		c2.display();
		c3.display();
		
		Country c4("Canada",23,61.32);							
		c4.show_data();											//displaying data using show_data function..
		
		Country c5;												//creating object using class name..
		c5.display();
		
		Country c6;
		c6.accept("China",42,67.87);							//accepting data using accept method
		c6.display();														
		
		cout<<"--------------------------------------------------------"<<"\n\n";
}