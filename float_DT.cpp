#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main(){
    float x = 3456.123332f;
    double a = 9.123456789;
    long double aa = 999.12345678L;

    //setting the precission value
    cout<<setprecision(7);

    cout<<"float is:"<<x<<endl;
    cout<<"double is:"<<a<<endl;
    cout<<"long double is:"<<aa<<endl;
    cout<<numeric_limits<float>::digits10<<endl;
        return 0;
}