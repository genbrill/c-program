#include <iostream>
#include <string>


class Student {
private:
    std::string name;
    std::string admissionNumber;
    double feeBalance;

public:
    
    void inputStudentData() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Admission Number: ";
        std::getline(std::cin, admissionNumber);

        std::cout << "Enter Initial Fee Balance: ";
        std::cin >> feeBalance;
    }

    
    void makePayment(double amount) {
        if (amount <= 0) {
            std::cout << "\n[Error] Invalid payment amount. Payment must be greater than zero." << std::endl;
        } else if (amount > feeBalance) {
            std::cout << "\n[Warning] Payment exceeds current balance! Processing partial refund/adjustment." << std::endl;
            feeBalance -= amount; // Keeps track of overpayment (negative balance)
            std::cout << "Payment of $" << amount << " processed successfully." << std::endl;
        } else {
            feeBalance -= amount;
            std::cout << "\nPayment of $" << amount << " processed successfully." << std::endl;
        }
    }

    
    void displayStatus() const {
        std::cout << "\n--- Student Fee Status ---" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Admission Number: " << admissionNumber << std::endl;
        std::cout << "Remaining Fee Balance: $" << feeBalance << std::endl;
    }
};


int main() {
    
    Student student1;

    
    student1.inputStudentData();

    
    student1.displayStatus();

    
    double paymentAmount;
    std::cout << "\nEnter payment amount to process: ";
    std::cin >> paymentAmount;
    student1.makePayment(paymentAmount);

    
    student1.displayStatus();

    return 0;
}