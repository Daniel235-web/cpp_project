#include<iostream>
using namespace std;

int minimumElement(int[], int);
int maximumElement(int[], int);

int main(){
    int smallest = 0;
    int maximum = 0;
    int size = 0;
    int arr[] = {3,4,44,22,52,34,1,21,35};
    size = sizeof(arr)/sizeof(arr[0]);
   smallest = minimumElement(arr, size);
   maximum = maximumElement(arr, size);
   cout<<"the maximum element is "<<" "<<maximum<<endl;
   cout<<"the minimum element is "<<" "<<smallest<<endl;


}

int minimumElement(int ab[], int a){
    int smallest = ab[0];
    for (int i = 0; i < a; i++){
        if (ab[i] < smallest){
            smallest = ab[i];
        }
    }
    return smallest;


}
int maximumElement(int max[], int size2){
   int  maximum = max[0];
   for (int i = 0; i < size2; i++){
     if (max[i] > maximum){
        maximum = max[i];

     }
   }
   return maximum;
   

}
