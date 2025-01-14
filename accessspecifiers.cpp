#include <iostream>
using namespace std;
// you can change the private , public and protectd when in the root class with a function inside the same class.
class Base {
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funBase(){
        a = 10;
        b = 12;
        c = 23;
    }

};
//key point for derived : it can only acess protected and  and prublic but can not access private
//but normally it can acess all the members with the function member in the base class
//more clearly : you can't change anything in the private inside a derived class but you can change in the protected and th public 
//when derived protected public and protected will become protected
//the way of inheriting will affect the objects and the grandchild classes
//if derived privately then the granderived will not be able to access the base members
class Derived: private Base{
    public:
  void  funDerived(){
        a = 3;
        b = 3;
        c = 4;
    }
};
class DerivedGrandchild: public Derived{
   void funcDerivedGrand(){
    a = 3;
    b = 3;
    c = 3;

   }
};
//key points : protected and private are not accessible in main when called upon an object  in main, i.e objects can not access private and protected unless derived
//but normally , you can use functions members to access all access specifiers provided the function is public
//clearly: you can't change anything in the private and protected in the when called upon an object , but you can change the public , i mean when used as an object

int main(){
    Derived x;
    x.a = 2;
    x.b = 3;
    x.c = 4;
}