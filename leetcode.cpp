#include<iostream>
using namespace std;

int main (){
   /*  int number[15]={0};
    number[0] = 10;
    number[14] = 150;

    int sum[5],i;
   int firstnumbers[5] = {1,2,12,3,4};
   int secondnumbers[5] = {9,8,3,1,2};

   for (i = 0; i< 5; i++){
    sum[i] = firstnumbers[i] + secondnumbers[i];
   }
   cout<<"the sum of the arrays are:"<<endl;
   for (i = 0; i<5; i++){
     cout<<sum[i]<<endl;
   }
    return 0;
    */
    int sum , i,j;
   int nums[] = {2,7,11,15};

    for (i = 0; i < 4; i++){
        for (j = i+1; j< 4; j++){
            if (nums[i] + nums[j] == 9){
                cout<<i<<j<<endl;
            }
        }

    }


 return 0;

   
}