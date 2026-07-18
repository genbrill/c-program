#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;

    person(string y,int x){
        name = y;
        age = x;
    }

    void displayperson(){

        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

};

class student : public person{
    public:
    int admission_number;
    int class_level;

    student(int a,int b,string c,int d ) : person(c,d){
        admission_number = a;
        class_level = b;
    }

    void displaystudent(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;  
        cout<<"Admission number : "<<admission_number<<endl;
        cout<<"Class : "<<class_level<<endl;
    }
};

int main(){
    student student1(10373,9,"peter",11);
    student1.displaystudent();

    return 0;
}