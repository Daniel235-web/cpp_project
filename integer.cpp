#include<iostream>

using namespace std;

int main() {
    unsigned short us_short = 56;
    signed short signed_short = -6;
    int a = 99916543;
    long int long_int = 456789;
    long long int _int = 9991654321;
    int8_t int8_variable = 2;

    cout<<"size of short int  is:"<<sizeof(us_short)<<endl;
    cout<<"size of int is :"<<sizeof(int)<<endl;
    cout<<"size of long"<<sizeof(long)<<endl;
    cout<<"size of long long"<<sizeof(long)<<endl;
    



    cout<<"usigned short int value:"<<us_short<<endl;
    cout<<"signe short int value:"<<signed_short<<endl;
    cout<<"int value is :"<<a<<endl;
    cout<<"long long int value is :"<<_int<<endl;
    cout<<"long int value is:"<<long_int<<endl;
    cout<<"int8 value is "<<int8_variable<<endl;


};


