#include<iostream>
using namespace std;

// function type is no return type ad no parameter

/*void sum(){
    int a,b, sum;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    sum = a + b;
    cout<<"sum of a and b is:"<<sum<<endl;
}
*/
//function type with return type and parameters
// int sum2(int x, int z){ 
//      return x + z;
// }
//function wiht no return type but with argument;

// void display(std::string name){
//     cout<<"your name is "<<name<<endl;

// }
//function with return type but no arguments note: when returning you shuould have  a variable to hold it;
string display(){
    string sentence = "c programming is the best you should learn don't let anybody deceive you";
    return sentence;
}


int main(){
string s;
s = display();
cout<<s<<endl;
//int sum;
//sum = sum2(3,2);
//cout<<sum<<endl;
//display("adedeji");
return 0;

}