#include<iostream>

using namespace std;

void fib(int f) {
    int x, y, nexterm = 0;
    x = 0;
    y = 1;

 for (int i = 1; i <= f; i++){ 
    cout<<x;
   nexterm = x + y;
   x = y;
   y = nexterm;
   }

}
int main(void){
    int n,s;
    cout<<"enter the number of terms you want"<<endl;
    cin>>n;
     fib(n);
     return 0;

}