#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    double exam_score;

    cout<<"Enter name :"<<endl;
    cin>>name;

    cout<<"Enter your age"<<endl;
    cin>>age;

    cout<<"Enter your exam score"<<endl;
    cin>>exam_score;

    if(age > 18){
        if(exam_score > 50){
            cout<<name<<endl;
            cout<<"Admitted";
        }
        else{
            cout<<name<<endl;
            cout<<"Not Admitted:Low score"<<endl;
        }
    }
    else if(age < 18){
        cout<<name<<endl;
        cout<<"Not Admitted:Underage"<<endl;
    }

}