#include<iostream>
#include<string>
using namespace std;


class account{
private:
string name = "daniel samuel emmanuel";
double balance= 0.00;

public:
void deposit(double amount){
   balance = balance + amount;
   cout<<"the amount added is "<<" "<<amount<<endl;
   cout<<" you account balance is "<< " "<<balance<<endl;
};
void withdraw(double amount){
    balance = balance - amount;
    cout<<"the amount withdrawed is "<<" "<<amount<<endl;
    cout<< " you account balance is "<<" "<<balance<<endl;
 }
 void display (){
    cout<<"the balance is "<<" "<<balance;
 }
 void name1(){

    cout<<"the name inserted "<<name;
 }
};

int main(){

     account daniel_account;
     //daniel_account.name = "samuel daniel";
     //daniel_account.balance;
     daniel_account.deposit(2000);
     daniel_account.withdraw(200);
     daniel_account.display();
     daniel_account.name1();
   


return 0;

}