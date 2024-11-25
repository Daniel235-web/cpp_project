#include<iostream>
using namespace std;

int main(){
    int store,i,j, store2;
    int arr[] = {2,2,3,3,4,4,5,5,7,7,1,8,8,9,9};

    for (i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++){
      for (j = i+1; i < sizeof(arr)/sizeof(arr[0]); i++){
         if (arr[i] == arr[j]){
            store = arr[i] + arr[j];
         }
         else if (arr[i]|| arr[j] == arr[i] || arr[j]){
            store2 = (arr[i] || arr[j]);
         }
      }
    
}
 cout<<store2<<endl;

 

}