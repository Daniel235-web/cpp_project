#include<iostream>
using namespace std;

class Rectangle {
    private:
    int height ;
    int breath;
    public:
    void SetLength(int h){
        if (h < 0) {
            height = 1;
        }
        else
        height = h;

    }
    void SetBreath(int b){
        if (b < 0){
            breath = 1;
        }
        else
        breath = b;
    }
    int GetHeight(){

        return  height;
    }
    int GetBreath(){

        return breath;
    }
    int area(){
        return height * breath;
    }

    int perimeter(){
        return 2 * (height + breath);
    }

};

int main (){
    Rectangle r1;
    r1.SetBreath(-10);
    r1.SetLength(30);
    r1.GetBreath();
    r1.GetHeight();
    cout<<r1.area()<<endl;
    cout<<r1.GetBreath()<<endl;
    cout<<r1.GetHeight()<<endl;
   
  

    //using pointers
    // Rectangle *p;
    // p = &R1;
    // p->height = 10;
    // p->breath = 3;

    // cout<<p->area();

    //creating an object in the heap section using pointers
    // Rectangle *p;
    // p = new Rectangle;
   // Rectangle *p = new Rectangle();
   // p->height = 30;
   // p->breath = 30;

   // cout<<p->area();

}