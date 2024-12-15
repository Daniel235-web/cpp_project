//default arguments in c++

#include<iostream>
#include<string>
using namespace std;

void  greeting(string name, string prefix= ".Mr", string suffix = " mrs");//so you can actually overide default values 

int main(){

 
greeting("danel", "Mr", "for life");
greeting("samuel", "Mr", "for change");
greeting("emmannuel", "Mr", "for the mnoney");
return 0;

}

void greeting(string name, string prefix, string suffix){
    cout<<"Hi "<<prefix  + " " + name + " " + suffix <<endl;


}