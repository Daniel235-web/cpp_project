#include<iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int breath;

    public:
    Rectangle(int l=0, int b=0){
        this->length = l;
        this->breath = b;
    }
    int getlength(){
        return length ;
    }
    int getbreath(){
        return breath;
    }
    void setlength (int l){
      this->length = l;
    }
    void setbreath (int b){
      this->breath = b;
    }
    void area(){
        cout<< (length * breath)<<endl;
    }
    void perimeter(){
        cout<<2 * (length + breath)<<endl;
    }

};

class cubic: public Rectangle{
    private:
  int height;
  public:
  cubic(int l =0, int b=0, int h=0){
    setlength(l);
    setbreath(b);
    this->height = h;
  }
  int getheight(){
    return height;
  }
  void setheight(int h){
    this->height = h;

  }
  void getVolume(){
    cout<<(getlength() * getbreath() * height)<<endl;
  }
  
}; 

int main(){
   Rectangle r;
   r.setbreath(7);
   r.setlength(10);
   cout<< r.getbreath()<<endl;
   cout<<r.getlength()<<endl;
   r.area();
   r.perimeter();




   cubic c;
   c.setheight(8);
   c.setbreath(7);
   c.setlength(3);
   cout<<c.getbreath()<<endl;
   cout<<c.getheight()<<endl;
   cout<<c.getheight()<<endl;
   c.area();

}