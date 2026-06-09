#include <iostream>
using namespace std;

int main(){

    int revenue[7];
    float Total = 0,total = 0;

    for(int i = 0;i <= 6 ; i++) {
        cout<<"Enter revenue for the day  :"<< (i + 1)<<endl;
        cin>>revenue[i];


        Total += revenue[i];

    }

    total = Total/7;

    cout<<"Total weekly revenue :"<<Total<<endl;
    cout<<"Average daily revenue :"<<total<<endl;


    return 0;
}