#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>  number = {1,3,4,5,6,7,8,9};
    // vector<int>:: reverse_iterator it;
    // for ( it = number.rbegin(); it !=number.rend(); it++){
    //      cout<<*it<<endl;

    // }

//     vector<int> v;
//     int num; int z;
//     int i;
//      cout<<"number you want to enter"<<endl;
//     do{
       
//           cin>>num;
//           v.push_back(num);

//     }while(num);
//     v.pop_back();
//     v.pop_back();
//     z = v.size();
//     cout<<"the remaining size are"<<endl;

// for (i = 0; i <= v.size(); i++){
//     cout<<v[i]<<endl;
// }    
// cout<<"the size is"<<z<<endl;

vector<int> v = {1,2,3,4,5,6,100,7,8,9,10};
vector<int>:: iterator it;

for (it = v.begin(); it != v.end();){
  if (*it % 2 == 0){
   v.erase(it);
  }
  else{
   it++;
  }

}
for (auto n: v){
   cout<<n<<endl;
   
}

}

