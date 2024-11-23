#include<iostream>
using namespace std;

int main() {
 /*   int n;
 cout<<"please enter a number greater than 6"<<endl;
 cin>>n;
  while(n <=6){
    cout<<"please enter a valid number"<<endl;
    cin>>n;

  }
  cout<<"thanks for inputing the valid number"<<endl;

  //using for loops for validation

  int a;
  cout<<"please enter a number greater than 6"<<endl;
  cin>>a;
  for( ; a<=6; ){
    cout<<"enter a valid number"<<endl;
    cin>>a;
  }
  cout<<"thanks for inputing the right number"<<endl;
  */
 //using flag

 int b;
bool check = 0;
 

 while (!check){
    cout<<"enter a number between 2 and 7"<<endl;
    cin>>b;
    if (b<=2 || b>=7){
        cout<<"enter a valid number"<<endl;

    }
    else{
       cout<<"thanks for entering the right number"<<endl;
       check= 1;
    };
    
 }
 
return 0; 


}



