//contructors in inheritance
#include<iostream>
using namespace std;

class Base {
    public:
    Base(){
        cout<<"default constructor"<<endl;
    }
    Base(int x){
        cout<<"parameterized contructor"<< " "<<x <<endl;

    }
};

class Derived: public Base{
    public:
    Derived(){

        cout<<"default constructor in Derived"<<endl;
    }

    Derived(int x){
        cout<<x<<" " <<"parameterized constructor in the Derived"<<endl;

    }
    //to call the base parameterized class from the derived parameterized class
    Derived(int x, int a): Base(x){

    cout<<"paramerized contructor of derived  is"<<" "<<a<<endl;

    }

};

int main(){
    Derived d(5, 4);

}