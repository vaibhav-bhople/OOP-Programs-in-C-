#include<iostream>
using namespace std;

main(){
    int a,b;
    cout<<"Enter value of a - ";
    cin>>a;
    cout<<"Enter value of b - ";
    cin>>b;
    
    try{
        if(b==0)
        {
            cout<<"hello\n";
            throw 0;
            cout<<"bye\n";
        }
        else
        {
            cout<<"a divide by b = "<<a/b;
        }
    }
    
    catch(int a)
    {
        cout<<"Divisor can't be zero ..\n";
    }
    
}