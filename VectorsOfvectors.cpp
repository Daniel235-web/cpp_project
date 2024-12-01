//we use vectors of vectors when we want both the roles and the colums to be dynamic, meaning of fix roles and colums just dynamci;
//syntax for vector  of vectors is "vector<vector<int>> v;" note that in this case we don't know the number of roles and column;
#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<vector<int>> v;
    int i,j;

    v.push_back({3,30,0,-2,2,1,});
    v.push_back({3,3,23,43,12,24});
    v.push_back({3,32,1,34,3,23,3,});
    v.push_back({3,2,3,4,2,1});
    v.push_back({3,2,24,24,8,9,9,10});

    // for (i = 0; i < v.size(); i++){//using normail iterator

    //     for (j = 0; j < v[i].size(); j++){
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }
    cout<<"before insetion"<<endl;
  for (i = 0; i < v.size(); i++){

    for (auto it = v[i].begin(); it != v[i].end(); it++){

         cout<<*it;
    }
    cout<<endl;
  }
  //lets say we want to input a vector after the first vector;
  vector<vector<int>>:: iterator it;

  it = v.begin();
  v.insert(it+1, {3000,3000,200000});
  
    cout<<"after inserting"<<endl;

    for (i = 0; i < v.size(); i++){

    for (auto it = v[i].begin(); it != v[i].end(); it++){

         cout<<*it;
    }
    cout<<endl;
  }

}