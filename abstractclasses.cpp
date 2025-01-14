// now if a class is having a virtual function or functions it is known as ,
// we can't creat an object of virtual classes but we can use them as a poiter dynamically
// so the purpose of inheritance is to achieve polymorphism and also reusability

//note: it is a must for derived funcitons to override the pure virtual functions
//there are three types of classes we can write 
//1. a base class with all concrete functions , that ie  the classes has full built functions, here the purpose is just for reuseability
//.a base class with all concrete and virtual fucntions the purpose is both for reuseability and and polymorphism because the virtal functions most be overidden by derived functions.
//.then if a base class is having all pure virtual funcitons the only purpose is for polymorphism and such a base class we can refer to it as interface
//note we cant create objects of abstract class, i mean when all the functions are fully pure virtual

#include<iostream>
using namespace std;

class car {
    public:
   virtual void start(){
        cout<<"car started"<<endl;
    }
    void stop(){
        cout<<"car stopped"<<endl;
    }

};

class toyota: public car{
public:
   void start(){
    cout<<"toyota startede"<<endl;
  }
 void stop (){
    cout<<"toyota stopped"<<endl;

  }

  
};
class lambo: public car {
    public:
    void start(){
        cout<<"lambo started "<<endl;
    }

    void stop(){
        cout<<"lambo stopped"<<endl;
    }
    
  };

  int main(){
    
    car *obj = new lambo();
    obj->start();
    obj->stop();
  }
