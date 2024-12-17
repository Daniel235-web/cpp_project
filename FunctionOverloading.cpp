#include<iostream>
#define PI 3.142
using namespace std;

int area(int);
double  area(double, double);
double area(double);


int main (){
    int  areaOfSquare;
    int square;
    double rectangle1, rectangle2, circle;
    double areaOfRectangle, areaOfCircle;
    
    cout<<"enter the area of the square"<<endl;
    cin>>square;
    areaOfSquare =  area(square);
    cout<<"the area of the square number you entered is:" <<" "<< areaOfSquare<<endl;
    
    cout<<"enter the area of the rectangle you want "<<endl;
    cin>>rectangle1>>rectangle2;
    areaOfRectangle = area(rectangle1, rectangle2);
    cout<<"the area of the rectangle you entered is : "<<" "<<areaOfRectangle<<endl;

    cout<<"enter the area of the circle you want "<<endl;
    cin>>circle;
    areaOfCircle = area(circle);
    cout<<"the area of the circle you entered is :" << " "<<areaOfCircle<<endl;
}

int area (int l){

  return l * l;

}

double area(double l, double b){
    double rect = 0;
    rect = l * b;
    return rect;

}

double area(double c){
   
    double circle = 0;
    circle = PI * c * c;

    return circle;



}