#include<iostream>
#include<vector>



int main (){
     int sum = 0 , i , a;
    std::vector< std::pair<int, int>> n;
    n = {{1,3}, {15,4}, {5, -4}};
     
     for (i = 0; i < n.size(); i++){
        if (i == 1){
          sum  +=  n[i].first + n[i].second;
         break;
        }
       

     }
     std::cout<<sum<<std::endl;

     

   
  
     
}
    