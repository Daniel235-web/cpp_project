#include<iostream>
#include <vector>

using namespace std;
int i;
int main() {
    vector<pair<int, string>> StudendDetails;

    StudendDetails = {{1, "daniel"}, {2, "joy"}, {3, "tunrayo"}, {4, "ezekiel"}, {5, "hopra"} };
    cout<< "Kindly check the studends details below"<<endl;

    for (i = 0 ; i < StudendDetails.size(); i++ ){

        cout<<StudendDetails[i].first<< " "<<StudendDetails[i].second<<endl;
    }
}