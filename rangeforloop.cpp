#include<iostream>
using namespace std;

int main () {
    int data[] = {1,10,-1,5,6,-1,7,-99,8,10 };//this gave the answer but it is not a good code!
    for (auto range: data){

        if (range == -1){ 
            continue;
         }
         else
          {
            if (range == -99)
            break;
          }
        cout<<range<<endl;
    }
}