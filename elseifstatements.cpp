#include<iostream>
 using namespace std;

int main(){

    int money;
   std::  cout<<"enter the amount you have"<< std::endl;
   std::cin>>money;
   if (money >= 1000){
   std::cout<<"i have: "<<money<<std::endl;
   std::cout<<"coffee in starbucks"<<std::endl;
   }
   else if (money >= 500)
   {
   std::cout<<"i have: "<< money<<std::endl;
   std::cout<<"coffee in ccd"<<std::endl;
   }
   else if (money == 300) {
      std::cout<<"you have: "<<money <<std::endl;
      std::cout<<"you can have coffee in nigeria"<<std::endl;
   }
   else
   std::cout<<"just don't bother keep your money"<<std::endl;
    

     return 0;
};

