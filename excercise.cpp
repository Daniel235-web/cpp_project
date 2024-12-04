#include<iostream>
#include<string>

using namespace std;

int main (){
    string full_name = "samuelemmanueldaniel";
    string f_name;
    string formatted;
    f_name.assign(full_name, 0, 7 );
    string l_name = full_name.substr(8, 9);
    formatted = l_name + f_name;
    formatted.insert(9, " ");
    
   cout<<formatted<<endl;
}