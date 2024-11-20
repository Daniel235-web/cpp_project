#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<< "enter your choice ";
    cin>>ch;

    switch(ch){
        default:
         cout<<"enter 1 for balance"<<endl;
         cout<<"enter 2 for complaint"<<endl;
         cout<<"enter 3 for cutomer care"<<endl;
          break;
    case 'a':
    cout<<"i wanna know my balance"<<endl;
      break;
    case 'b' :
    cout<<"i wanna make a complaint"<<endl;
      break;

      case 'c': 
      cout<<"i wanna talk to customer care executive"<<endl;


    }
    cout <<"end of switch case"<<endl;
    return 0;

}