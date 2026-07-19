#include <iostream>
using namespace std;

class vehicle{
    public:
    string brand;
    int year_of_manufacture;

    vehicle(string x,int y){
        brand = x;
        year_of_manufacture = y;
    }

    void displayvehicle(){
        cout<<"Vehicle brand : "<<brand<<endl;
        cout<<"Year of manufacture : "<<year_of_manufacture<<endl;
    }
};

class car : public vehicle{
    public:
    int No_of_doors;
    int engine_capacity;

    car(int a,int b,string c,int d) : vehicle(c,d){
        No_of_doors = a;
        engine_capacity = b;
    }

    void displaycar(){
        cout<<"Vehicle brand : "<<brand<<endl;
        cout<<"Year of manufacture : "<<year_of_manufacture<<endl;
        cout<<"Number of doors : "<<No_of_doors<<endl;
        cout<<"Engine capacity : "<<engine_capacity<<endl;
    }
};

int main(){
    car car1(4,700,"Xiaomi SU7",2025);
    car1.displaycar();
}