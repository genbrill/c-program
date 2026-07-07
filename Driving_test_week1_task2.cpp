#include <iostream>
using namespace std;

int main(){

    string name;
    int practical_marks,theory_marks;

    cout<<"Enter name"<<endl;
    cin>>name;

    cout<<"Enter practical test marks :"<<endl;
    cin>>practical_marks;

    cout<<"Enter theory test marks :"<<endl;
    cin>>theory_marks;

     int average_score = (theory_marks + practical_marks)/2;

     if(average_score >= 50){
        cout<<"Name : "<<name<<endl
        <<"Theory marks : "<<theory_marks<<endl
        <<"Practical marks : "<<practical_marks<<endl
        <<"Average score : "<<average_score<<endl
        <<"PASS"<<endl;
     }
     else if(average_score < 50){
        cout<<"Name : "<<name<<endl
        <<"Theory marks : "<<theory_marks<<endl
        <<"Practical marks : "<<practical_marks<<endl
        <<"Average score : "<<average_score<<endl
        <<"FAIL"<<endl;
     }
}
