#include<iostream>
using namespace std;

class Test {
   private:
    int a;
    int *p;
   public:
    Test(int x){
        a = x;
        p = new int[a];

    }
    Test(){
        a = 0;
        p = new int [a];
    }
   
    Test(Test &copy){
        a = copy.a;
        p = new int[a];
    }

   int get(){
      return a;
    }
    int* pointer (){
        return p;
    }
};
int main (){
    Test  z(5);
    z.pointer();
     z.get();
    
    cout<<z.get()<<endl;
    cout<<z.pointer()<<endl;
    
    

}