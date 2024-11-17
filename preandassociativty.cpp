#include<iostream>
using namespace std;

int main(){
  /* int x = 5;
   cout<<x++ + ++x + --x + x--<<endl;// this line is a bad code avoid using it because it can vary depending on the compiler
   cout<<x<<endl;

   

  
  int x =3, y;
  y=x++ + ++x;// again this line of code is a bad code avoid using it because the answer can vary depending on the compiler, so it is compiler dependent
  cout<<"x="<<x<<endl<<"y="<<y<<endl;
  
  */

int y = 3;
int z = (--y)*(y=10);// in the case of predecrement or preincrement  the value will be used just after the end of the expression , that is 10 will be for both Y's
cout<<z<<endl;

//but in the case of postincrement  the original value will be used then the 10 will be added to it , afterwards the 3 will be incremented to 4




}