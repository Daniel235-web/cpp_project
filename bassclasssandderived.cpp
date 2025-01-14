// when you have a base class pointer  object, pointing to a derived class , you can only call the base class functions and not the derived class
//note it is not possible to have an pointer of derived class and assign it to base class
#include <iostream>
using namespace std;

class Base {
    int a = 21;
    int b = 32;

    public:

    Base (int x = 23, int y = 30){
         this->a = x;
         this->b = y;


    }
    int  function1(int x , int b){
        return x + b;

    }
    int function2 (int z , int y){
        return z + y;
    }
    int function3(){
        return a * b;
    }
    protected:
     int function4 (){
        return a + b;
     }

};

class Derived: public Base{
int y = 32;
string z = "daniel";
public :
string function5(){
    return z;

}

int function6(){
    return 2 * y;
}

int c = function4();

};


int main(){

  Base *p ;
  p = new Derived();
  cout<<p->function1(2, 3)<<endl;
  cout<<p->function2(2,3)<<endl;
  cout<<p->function3()<<endl;
   
}
