#include <iostream>
using namespace std;

class RoomBooking{
    public:
    string guestname;
    int roomnumber;
    int daysbooked;

    RoomBooking(string y,int x,int z){
        guestname = y;
        roomnumber = x;
        daysbooked = z;

        cout<<"Room booking confirmed!!"<<endl;
    }

    void displaybooking(){

        cout<<"Guest name : "<<guestname<<endl;
        cout<<"Room number : "<<roomnumber<<endl;
        cout<<"Number of days booked :"<<daysbooked<<endl;
    }

    ~RoomBooking(){

        cout<<"Booking ended room released!!"<<endl;
    }
};

int main(){
    RoomBooking RoomBooking1("Peter",007,10);
    RoomBooking1.displaybooking();
}