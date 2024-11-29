#include<iostream>
#include<utility>


using namespace std;

int main(){
  pair<int,float> p(1, 1.31);
   cout<<p.first <<endl<<p.second<<endl;

   //another way to initialize it 

   pair<int, float> p2;

   p2.first = 1;
   p2.second = 2.33;
   cout<<p2.first<<endl<<p2.second<<endl;

   // to automatically create a pair;

   auto p3 = make_pair("daniel", 'e');

   cout<<p3.first<<endl<<p3.second<<endl;
   // you can initialize  another a pair with another pair but it should be of the same datatype

   pair<int, float> p4(p);

   cout<<p4.first<<endl<<p4.second<<endl;

   //we can also do direct assignment

   pair<bool, string> p6;

   p6.first = false;
   p6.second = "daniel is a good programmer";
   cout<<p6.first<<endl<<p6.second<<endl;

   //note swapping two pairs they must be of the same data type;

   p.swap(p2);

//not for comparing pairs too it needs to be of the same data type
}