#include<iostream>
using namespace std;

void print_array(const int *p, int);

int main (){
    int size = 0;
    int arr[] = {1,2,3,4,5,6,7,8,2};
    size = sizeof(arr)/sizeof(int);
    print_array(arr, size);
    print_array(arr, size);
    return 0;

}

void print_array( const int *p, int a){
    for (int i = 0; i <  a; i++){
        cout<<*(p + i)<<endl;

    }
  cout<<endl;

}