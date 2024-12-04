#include<iostream>
#include<string>
using namespace std;

int main(){
    string  var = "daniel is a good programmer";

    string:: iterator it;

    for (it = var.begin(); it != var.end(); it++){
        cout<<*it;
    }

    cout<<"the size of var is"<<var.size()<<endl;
    cout<<"the length of var is"<<var.length()<<endl;
    cout<<"the max size of var is"<<var.max_size()<<endl;
    cout<<"the capacity of var is "<<var.capacity()<<endl;
    return 0;
}