// when a class inherit from an abstract classs without overidding it becomes abtract too, so you have to overide the class first 
#include <iostream>
using namespace std;


class Car {
    public:
   virtual void  start() = 0;
   virtual void stop() = 0;

};
class toyota: public Car{
    public:
    void start(){
        cout<<"toyota started"<<endl;
    }
    void stop(){
        cout<<"toyota stopped"<<endl;
    }

};

class camry: public Car{
    public:
    void start(){
        cout<<"camry started"<<endl;
    }
    void stop(){
         cout<<"camry stopped"<<endl;
    }
};

int main(){

    Car *c= new toyota();
    c->start();
    c->stop();
    Car *ca = new camry();
    ca->start();
    ca->stop();
}