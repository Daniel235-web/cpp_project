#include<iostream>
#include<vector>
using namespace std;

int main (){
    int count = 0;
    vector <int> num = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for (int range: num){
        if (range%3 == 0 || range%5== 0) {
            count++;
        }
       
    }
     cout<<count<<endl;
   
    return 0;
}