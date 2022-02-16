#include<iostream>
#include<fstream>
using namespace std;

/*main(){
    ofstream filestream("file.txt");
    
    if(filestream.is_open()){
        filestream<<"This is cpp session.\n";
        filestream.close();
        cout<<"write successfully..\n";
    }
    else{
        cout<<"error";
    }
    
}*/

main(){
    char input[30];
    ofstream of;
    of.open("fd.txt");
    
    cout<<"Enter your name - ";
    cin.getline(input,30);
    of<<input;
    cout<<"Enter your age - ";
    cin>>input;
    of<<input;
    
    of.close();
    cout<<"Reading op is running \n";
    ifstream is;
    string read1;
    is.open("fd.txt");
    while(getline(is,read1)){
        {
            cout<<read1;
        }
    }
    is.close();
    
}