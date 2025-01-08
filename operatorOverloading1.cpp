#include <iostream>
using namespace std;

class complex {
    
    int real;
    int imaginary;

   public:
   //method by abdul bari
   void dislay (){
    cout<<real<<"+i"<<imaginary<<endl;
   }
    complex (int r = 0, int i = 0){
        this->real = r;
       this->imaginary  = i;
    }

//    complex operator+(complex x){
//     complex temp;
//     temp.real  = real + x.real; 
//     temp.imaginary = imaginary + x.imaginary;
//     return temp;
//    }
//using friend functions
friend complex operator+(complex , complex );
friend ostream &  operator<<(ostream &, complex &);

};
 complex operator+(complex c4, complex c5){
    complex temp;
    temp.real = c4.real + c5.real;
    temp.imaginary = c4.imaginary + c5.imaginary;
    return temp;
}
ostream & operator<<(ostream &o, complex &c){
    o<<c.real<<"+i"<<c.imaginary<<endl;
    return o;
}
int main(){
    complex c1(3,7);
    complex c2(2, 8);
    complex c3;
    c3 = c1 + c2;
    //c3.dislay();
    cout<<c3;
    
}