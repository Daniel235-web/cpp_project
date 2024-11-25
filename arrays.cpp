#include<iostream>
using namespace std;

int main (){
  /*  int n = sizeof(double);

   cout<<n<<endl;
   

  int n = 5;

  while (n++ < 10)
  {
    int roll_no[n];

    cout<<n<<endl;
  }
  */

 int roll_no[5];// to return the sum
 int i, sum = 0;
 cout<<"enter roll number"<<endl;
 for (i = 0; i<=4; i++)
 {
    cin>>roll_no[i];
    sum += roll_no[i];
 }
 cout<<"the  sum of the numbers is :"<<sum<<endl;
 



}