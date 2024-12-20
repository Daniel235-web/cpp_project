#include<iostream>
using namespace std;

void printList(string *, int);
void clearList(string[], int );

int main(){
    int sizeOfList = 0;
   string listOfPresenters[] = {"Daniel", "emmanuel","samuel"};
   sizeOfList = sizeof(listOfPresenters)/sizeof(listOfPresenters[0]);
   printList(listOfPresenters, sizeOfList);
   clearList(listOfPresenters, sizeOfList);
}

 void printList(string *p, int  size1){
     for (int i = 0 ; i < size1; i++){
        cout<<p[i]<<" ";
     }
cout<<endl;
 }
 void clearList(string clear[], int size2){
    for (int i  = 0 ; i < size2; i++){
        clear[i] = " ";

    }
    cout<<"list of those motherfuckers have been cleared"<<endl;
 }