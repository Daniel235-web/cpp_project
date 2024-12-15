#include<iostream>
using namespace std;
//in call by value the original value is not modified unless used with reference 

void modify (int){
    int n = 50;
    cout<<"the value of a in that was modified "<<n<<endl;
    
}

int main (){
    int a;
    cout<<"enter the number a "<<endl;
    cin>>a;
    cout<<"the value of a before modifying"<<a<<endl;
    modify(a);
    cout<<"the value of a after modifying "<<a<<endl;

    
}