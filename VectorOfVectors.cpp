//Topic............ vector of vector and array of vector

//array of vectors
#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int> v[5];// array of vectors;
    // v[0].push_back(1);
    // v[0].push_back(3);
    // v[1].push_back(3);
    // v[1].push_back(4);
    // v[2].push_back(5);
    // v[2].push_back(4);
    // v[3].push_back(8);
    // v[3].push_back(7);
    // v[4].push_back(9);
    // v[4].push_back(10);
  //anther way to input a vector;

      for (int i = 0; i < 5 ; i++){
          cout<<"enter the size vector  you want for number:"<<i + 1;
           int n;
           cin>>n;
          
           for (int j= 0; j < n; j++){
             cout<<"enter the numbers you want";
            int a ;
            cin>>a ;
            v[j].push_back(a);
           }


      }
    for(int i = 0; i < 5; i++){
        
        for (int j= 0; j < v[i].size(); j++){

            cout<<v[i][j]<<"  ";


        }
      cout<<endl;
    }




}