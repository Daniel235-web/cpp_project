#include<iostream>
using namespace std;

int main (){
    //memmory allocation at run time
    int i, j;
    int array[2][3];

    for (i = 0; i < 2; i++){
        for(j=0; j<3; j++){
            cout<<"enter the number you want"<<endl;
            cin>>array[i][j];

        }
        cout<<endl;
    }
    cout<<"the arrays are:"<<endl;
    for (i =0 ; i<2; i++){
        for (j = 0; j<3; j++)
        {
            cout<<array[i][j]<<endl;
        }
    }




}