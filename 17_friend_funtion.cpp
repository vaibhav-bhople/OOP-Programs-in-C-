//friend funtion

#include <iostream>
using namespace std;

class Fruit{
    private:
    int price;
    string name;
   
   
    friend void display(Fruit f1);
    
    public:
    void accept(int p,string n){
        price = p;
        name = n;
    }
};

void display(Fruit f1){
    cout<<"price - "<<f1.price<<endl;
    cout<<"name - "<<f1.name<<endl;
}

main(){
    Fruit apple,banana;
    apple.accept(100,"apple");
    display(apple);
    
    cout<<"\n";
    
    banana.accept(200,"banana");
    display(banana);
    
}