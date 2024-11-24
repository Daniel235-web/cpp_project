#include<iostream>
using namespace std;

int main() {
    int data[] = {10,1,3,-4,7,5};
    int i,j,total =0;
    for (i = 0; i < 6 ; i++){
        for (j=i + 1; j<6; j++){
            total += data[i]*data[j];
        }
    }
    cout<<"the total is:"<<total<<endl;
    return 0;
}