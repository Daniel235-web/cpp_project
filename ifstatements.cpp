#include<iostream>
using namespace std;
int main() {
    int money;
    cout<<"enter the amount of money that is greater than a 1000"<<endl;
    cin>>money;
    if (money > 1000)//if this statement is true , it will print both "go and coffee in seebucks" and "go home you don't have enough"
    //but if false it will print only "go home you don't have enough" without entering the if block;
cout<<"go and coffee in seebucks"<<endl;

    cout<< "go home you don't have enough"<<endl;
      return 0;
}