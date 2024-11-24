#include<iostream>
using namespace std;

int main(){
   /* int i;
     for (i = 1;; i++){
        cout<<"my name is daniel"<<endl;
     }
     */
    char choice;

    while (1){

        cout<<"do you want to contiue (Y/N)"<<endl;
        cin>>choice;
        if(choice == 'n' || choice =='N') {
            break;
        }

    }
    return 0;
}