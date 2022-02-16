#include<iostream>
using namespace std;

class Country{
    public:
  string c_name;
  int states;
  void count(){
      cout<<"method count called...\n";
  }
};

class States : public Country{
    public:
  string s_name;
  int districts;
  void state(){
      cout<<"Method state called...\n";
  }
};

class Districts : public States{
    public:
  string d_name;
  int city;
  
  void accept(string c_name,int states,string s_name,int districts,string d_name,int city){
      this -> c_name = c_name; 
      this -> states = states;
      this -> s_name = s_name;
      this -> districts = districts;
      this -> d_name = d_name;
      this -> city = city;
  }
  
  void display(){
      cout<<c_name<<"\t"<<states<<"\t"<<s_name<<"\t"<<districts<<"\t"<<d_name<<"\t"<<city<<"\n";
  }
};

main(){
    Districts d1;
    d1.count();
    d1.state();
    d1.accept("India",36,"Maharashtra",28,"Jalna",10);
    d1.display();
}