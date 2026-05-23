#include <iostream>
using namespace std;

int main(){
    string name;
    int marks,attendance;

    cout<<"Enter student name:";
    getline(cin,name);

    cout<<"Enter marks";
    cin>>marks;

    cout<<"Enter percentage attendance";
    cin>>attendance;

    if(marks >= 70){
        if(attendance = 80 && attendance > 80){
            cout<<name<<'\n';
            cout<<"scholarship = full sholarship";
        }
        else{
            cout<<name;
            cout<<"Scolarship = partial scholarship";
        }
    }
    else if(marks >= 50 && marks <= 69){
        if(attendance >= 85){
            cout<<name<<'\n';
            cout<<"scolarship = partial scholarship";
        }
        else if(attendance < 85){
            cout<<name<<'\n';
            cout<<"Scholarship = no scholarship";
        }
    }
    else if(marks < 50){
        cout<<name<<'\n';
        cout<<"No scholarship";
    }


}