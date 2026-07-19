#include <iostream>
using namespace std;

class payment{
    public:
    int processpayment(int x){
        cout<<"Final payment amount : "<<x<<endl;
        return x;
    }

    int processpayment(int x,int y){
        cout<<"Amount : "<<x<<endl;
        cout<<"Transaction fee : "<<y<<endl;
        int pay = x + y;
        cout<<"Total pay = "<<pay<<endl;
        return pay;
    }

    int processpayment(int x,int y,int z){
        cout<<"Amount : "<<x<<endl;
        cout<<"Transaction fee : "<<y<<endl;
        cout<<"Discount : "<<z<<endl;
        int pay = x + y + z;
        cout<<"Total pay = "<<pay<<endl;
        return pay;
    }
};

int main(){
    payment payment1;
    payment1.processpayment(1000);
    payment1.processpayment(1000,10);
    payment1.processpayment(1000,10,100);

}