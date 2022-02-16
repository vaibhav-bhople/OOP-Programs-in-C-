#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
    
}

main(){
    int n;
    cout<<"Enter the no. till when fibonacci series is required - ";
    cin>>n;
    cout<<endl<<endl;
    
    int i;
    for(i=1; i<=n; i++){
        cout<<fib(i)<<"\t";
    }
    
}