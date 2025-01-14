#include <iostream>
using namespace std;

class Base {

    public:
    
  virtual  void fun1(){
        cout<<"funtion from Base class"<<endl;
    }
};

class Derivded: public Base{
    public:
 void fun1(){
    cout<<"function from derived class"<<endl;//fun1 overrided here
 }
};
int main (){
    Derivded obj;
    obj.fun1();
    Base *p;
    p =  new Derivded();
    p->fun1();

}
// to achieve run time polymorphism we need three thing virtual overidding and base class pointer and also derived class object