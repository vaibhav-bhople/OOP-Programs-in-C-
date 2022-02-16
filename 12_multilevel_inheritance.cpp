#include<iostream>
using namespace std;

class Society{
    public:
    string name;
    string location;
    void clean(){
        cout<<"Cleaned../\n";
    }
};

class Wing : public Society{
    public:
    int no_flats;
    void count(){
        cout<<"Number of floors..\n";
    }
    
};

class Flats : public Wing{
    public:
    int flat_no;
    string type;
    
    void accept(string name,string location,int no_flats,int flat_no,string type){
        this -> name = name;
        this -> location = location;
        this -> no_flats = no_flats;
        this -> flat_no = flat_no;
        this -> type = type;
    }
    void display(){
        cout<<name<<"\t"<<location<<"\t"<<no_flats<<"\t"<<flat_no<<"\t"<<type<<"\n";
    }
};

main(){
    Flats f1;
    f1.clean();
    f1.count();
    f1.accept("Abc","Pune",40,32,"2 BHK");
    f1.display();
}