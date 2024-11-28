#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>  number = {1,3,4,5,6,7,8,9};
    vector<int>:: reverse_iterator it;
    for ( it = number.rbegin(); it !=number.rend(); it++){
         cout<<*it<<endl;

    }

}
