#include<iostream>

using namespace std;
int main ()
{
    int money, age;
  cout<<"enter the amount of money you have: "<< endl;
  cin>>money;

  if (money > 1000){
    cout<<"enter Your age"<<endl;
    cin>>age;
    if (age > 20){
        cout<<"lets have a beer"<<endl;
    
    }else{
        cout<<"lets have a coffe"<<endl;
    }

  }
  else if (money >= 500){
    cout<<"enter your aga:"<<endl;
    cin>>age;
    if (age > 15){
        cout<<"you can take cock"<<endl;

    }else
    {
        cout<<"just take tea"<<endl;
    }
  }else{
    cout<<"just go home you dont have enough money to flex"<<endl;
  }

}