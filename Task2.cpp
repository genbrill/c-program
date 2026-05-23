#include <iostream>
using namespace std;

int main(){

    string name;
    int years;
    int perfomance_rating;

    cout<<"Enter Employee name: \n";
    getline(cin,name);

    cout<<"Enter years of service: \n";
    cin>>years;

    cout<<"Enter the perfomance rating (1-5)\n";
    cin>>perfomance_rating;

    if(years >= 5){
        if (perfomance_rating == 4 || perfomance_rating == 5){
            cout<<"Employee name is "<<name<<'\n';
            cout<<"Bonus = ksh 50,000\n";
        }
        else{
            cout<<"Employee name is "<<name<<'\n';
            cout<<"Bonus = ksh 30,000\n";
        }
    }
    else if(perfomance_rating == 4 || perfomance_rating == 5){
        cout<<"Employee name is "<<name<<'\n';
        cout<<"Bonus = ksh 20,000\n";
    }
    else{
        cout<<"Employee name is "<<name<<'\n';
        cout<<"Bonus = No Bonus\n";
    }
}