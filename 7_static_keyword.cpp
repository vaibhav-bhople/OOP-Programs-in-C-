//if we are declaring any instance variable or method as static then to call that method or variable we do not require the object..
/*
1)static variable refers to the common property of all objects..!
2)static variable can be initialized only once in a class(thats why we initialize that variable  at the time of declaration)..!
*/

#include<iostream>
using namespace std;


class  Account{

	public:
	int acc_no;
	string b_name;
	static double roi;
	
	void get(int acc_no,string b_name){
		this -> acc_no = acc_no;
		this -> b_name = b_name;
	}
	
	void display(){
		cout<<"Account number -  "<<acc_no<<endl;
		cout<<"Bank name - "<<b_name<<endl;
		cout<<"rate of interest - "<<roi<<endl<<endl;
	}
};

double Account :: roi=7.45;

main(){
	Account a1,a2,a3;
	cout<<"\n";
	
	a1.get(101,"pune");
	a1.display();
	
	a2.get(102,"Lonavala");
	a2.display();
	
	a3.get(103,"Jalna");
	a3.display();
}
