#include <iostream>

#include<string>

class instructor {
    public:
  std:: string name;
  int exp;
  void display(){
    std::cout<<"The name of the instructor is "  <<name <<" and he has "<<exp <<"years experience";
  }
};

