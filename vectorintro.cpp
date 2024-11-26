#include<iostream>
#include<vector>
using namespace std;

int main (){

    // vector<int> numbers;
    // int value,i;

    // for (i = 0; i < 3; i++){
    //     cout<<"enter value you want"<<endl;
    //     cin>>value;
    //     numbers.push_back(value);
    // }
    // cout<<"the values you entered are:"<<endl;
    // for (i =0 ; i <3; i++){
    //     cout<<numbers[i]<<endl;
    // }
    //To repeate the same numbers 10 times;
    // vector<int> numbers(10, 5);
    // int i;
    // for (i = 0; i < numbers.size(); i++){
    //  cout<<numbers[i]<<endl;
    // }

    //using the fill algorithm

    vector<int> numbers(10);
    int i;
    fill(numbers.begin(), numbers.end(), 5);
     for (i = 0; i < numbers.size(); i++){
           cout<<numbers[i]<<endl;
     }
}