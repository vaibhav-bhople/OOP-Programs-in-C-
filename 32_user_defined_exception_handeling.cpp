#include<iostream>
using namespace std;

class UserDefine : public exception{
    public:
    const char  *what()
    const throw()
    {
        return "Not eligible";
    }
};

main(){
    int age;
    cout<<"Enter age - ";
    cin>>age;
    
    try
    {
    if(age<=18){
        UserDefine s;
        throw s;
    }
    else{
        cout<<"You are eligible";
    }
    }
    
    catch(const char *e){
        cout<<e;
    }
}