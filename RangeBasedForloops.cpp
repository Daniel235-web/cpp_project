#include<iostream>
using namespace std;

int main() {
    /* 
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for (int range: a){
        cout<<range<<endl;


    }
     */
    char str[] = "daniel samuel";
    for (char c: str){
        if (c != ' ')
        cout<<c<<endl;
    }

}