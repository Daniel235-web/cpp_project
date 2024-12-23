#ifndef _ABC_D_
#define _ABC_D_ 

#include<iostream>
#include<string>


class Account {
    private:
    std:: string name;
    double balance ;

    public:
    void set_balance (double amount){
        balance += amount ;
        std::cout<<"Hello" <<" "<<name<<"  "<<"you Just set an amount of "<<"  "<< amount<<std::endl;

    }
    double get_balance (){
        
        
        return balance;
    }

    void withdraw(double amount);
    void deposit(double money);

    void name1(std:: string person ){
        name = person;
    }
    



};
#endif

