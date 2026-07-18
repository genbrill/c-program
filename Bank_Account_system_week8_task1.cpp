#include<iostream>
using namespace std;

class BankAccount{
    public:
    string holdersname;
    int accountnumber,accountbalance;

    BankAccount(string x,int y,int z){
        holdersname = x;
        accountnumber = y;
        accountbalance = z;

        cout<<"Account succesfuly created!!"<<endl;
    }

    void displayaccount(){
        cout<<"Account holders name : "<<holdersname<<endl;
        cout<<"Account number : "<<accountnumber<<endl;
        cout<<"Account balance : "<<accountbalance<<endl;
        
    }

    ~BankAccount(){

        cout<<"Account closed successfuly!"<<endl;
    }
};

int main(){

    BankAccount BankAccount1("Peter",16323951,500000);
    BankAccount1.displayaccount();
}