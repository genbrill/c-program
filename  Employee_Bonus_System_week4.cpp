#include <iostream>
using namespace std;

int main(){

    string Employee_name;
    int Basic_salary,Bonus;
    float Total_Salary;

    for(int i = 1;i <= 5;1++ ){
        cout<<"Enter Employee name"<<endl;
        getline(cin,Employee_name);

        cout<<"Enter basic salary"<<endl;
        cin>>Basic_salary;

        cin.ignore();

        Bonus = 0.05 * Basic_salary;

        Total_Salary = Basic_salary + Bonus;

        cout<<"Employee name : "<<Employee_name<<endl;
        cout<<"Basic salary : "<<Basic_salary<<endl;
        cout<<"Bonus : "<<Bonus<<endl;
        cout<<"Total salary : "<<Total_Salary<<endl;
    }
}