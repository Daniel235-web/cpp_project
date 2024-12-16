#include<iostream>
using namespace std;

int fact(int);

int main() {
    int a, s;
    cout << "Please enter the value you want: ";
    cin >> a;
    s = fact(a);
    cout << "The factorial of " << a << " = " << s << endl;
    return 0;
}

int fact(int f) {
    int factorial = 1;
    int i;

    // If the input is 0 or 1, return 1 as factorial of 0 and 1 is 1
    if (f == 0 || f == 1)
        return 1;
    
   for (i = 2 ; i <= f; i++){
    factorial = factorial * i;
   }

    return factorial;
}
