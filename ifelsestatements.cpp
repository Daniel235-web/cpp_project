#include<iostream>
using namespace std;

int main (){
    int money;
    cout<<"enter the amount you have "<<endl;
    cin>>money;
    if (money >= 1000) {
        cout<<"the money i have is:"<<money<<endl;
        cout<<"coffe in starbuck"<<endl;

    }else{
        cout<<"the money i have is:"<<money<< endl;
        cout<<"coffee in cdd"<<endl;
    }
    cout<<"let's go home"<<endl;
    return 0;
}