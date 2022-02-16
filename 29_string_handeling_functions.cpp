#include<iostream>
#include<cstring>

using namespace std;

main(){
    /*
    char c1[]={"vaibhav"};
    char c2[]={" bhople"};
    int res = strcmp(c1,c2);         //1.compare 2 char arrays...
    cout<<res<<endl;
    */                 
    
    /*
    strcat(c1,c2);                   //2.concat 2 char arrays...
    cout <<c1<<endl;
    */
    
    /*
    string s1 = "vaibhav";
    string s2 = " bhople";
    s1.append(s2);
    cout<<s1<<endl;
    */
    
    
    char c1[]={"vaibhav"};
    char c2[30];
    strcpy(c2,c1);                  //3.copy content of second string in first string...
    cout<<c2<<endl;
    cout<<strlen(c1);               //4.to find length of the string...
    
    
}
