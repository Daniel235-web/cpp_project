#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str;
    // str = ("samuel");
    //  string dsan = ("daniel is a good boy");

     //we can also copy strings to another strings
    //  string str4 {dsan};

    //  cout<<dsan<<endl<<str<<endl<<str4<<endl;

     //lets write a single character 10 times
    //  string  ten  (10, 's')  ;

    //  cout<<ten<<endl;

    //  string str5{str, 3};// this mean it will start from the 3rd index;

    //  string str6 = {"daniel", 3};// this means it will start from the 0 to the 3rd of the string which is it will print dan

    //  cout<<str6<<endl<<str5<<endl;

    // string name;
    // cout<<"enter your name "<<endl;
    //  getline(cin, name);
    // cout<<"your name is"<<" "<<name<<endl;

//to access any element in a string

string str1 = {"daniel samuel"};

cout<<str1[1]<<endl;//this will not give any bound checking that is even if the number of index is not present it will not give error instead might give a random gabage
cout<<str1.at(1);// this will give a bound checking
    
}