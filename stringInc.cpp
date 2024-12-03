//strings in c

#include<iostream>
#include<cstring>
using namespace std;

int  main(){
    char  F_name[10];
    char  L_name[10];

    cout<<"enter your first name";
    cin>>F_name;
    cout<<"enter your last name";
    cin>>L_name;

    cout<<"your first name has"<<strlen(F_name) <<"characters"<<endl<<"and your last name has"<<strlen(L_name)<<"characters"<<endl;


}