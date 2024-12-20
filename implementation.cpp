#include <iostream>
#include <string>

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


void Account:: withdraw(double amount){
     balance  -= amount;
    std::cout<<"Hello" <<" "<<name<<" "<<"you  just withdrawed"<<"  "<< amount <<std::endl;
}
void Account:: deposit(double money)   {
    balance += money;
    std::cout<<"Hello" <<" "<<name<<" "<<" you just deposited  "<<"  "<< money<<std::endl;
}

 double account_balance = false;
 void  check_account_balance(){
     account_balance = true;
   }

int main(){
    Account Account_person;

    Account_person.name1("akiyemi");
    
    Account_person.set_balance(1700);
    Account_person.deposit(1000);
    Account_person.withdraw(500);

    
    
   

   check_account_balance();

   if (account_balance == true){
    
    account_balance = Account_person.get_balance();
     std::cout<< "Your balnance is"<<" " <<account_balance<<std::endl;
   }

   

    

    


}