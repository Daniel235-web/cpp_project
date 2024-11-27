#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> n = {2,3,9,7,8,4,6,4,4,3};
    vector<int>:: iterator it;
    for (it =n. begin(); it !=n.end(); it++ ){
        cout<<*it<<endl;

    }
    cout<<"good night daniel";
    return 0;
  
   
}