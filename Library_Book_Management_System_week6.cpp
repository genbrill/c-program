//Library_Book_Management_System

#include <iostream>
using namespace std;

class Book{
    public:
    string Book_author,Book_title;
    int copies_available = 20,Books_remaining = 0;

    void inputdetails(){
        cout<<"Enter book author :"<<endl;
        getline(cin,Book_author);

        cout<<"Enter book title :"<<endl;
        getline(cin,Book_title);
    }

    int borrowBook(){
        return Books_remaining = copies_available - 1;
    }

    void displayDetails(){
        cout<<"Book author : "<<Book_author<<endl;
        cout<<"Book title : "<<Book_title<<endl;
        cout<<"Books remaining : "<<Books_remaining<<endl;
    }

};

int main(){

    Book Book1;
    Book1.inputdetails();
    Book1.borrowBook();
    Book1.displayDetails();

    return 0;
}
