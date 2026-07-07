#include <iostream>
#include <string>

using namespace std;


const double RATE_PER_UNIT = 5.4; 


void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";

    cin.ignore();
    getline(cin, name);

    cout << "Enter units consumed: ";
    cin >> units;
}

double calculateBill(double units) {
    return units * RATE_PER_UNIT;
}


double applyDiscount(double units, double current_bill) {
    if (units > 100) {
        return current_bill * 0.10;
    }
    return 0.0;
}


void displayBill(string name, double units, double bill_before_discount, double discount, double final_bill) {
 
    cout << "Customer Name              : " << name << endl;
    cout << "Units Consumed             : " << units << endl;
    cout << "Total Bill Before Discount : " << bill_before_discount << endl;
    cout << "Discount Applied           : " << discount << endl;
    cout << "Final Amount Payable       : " << final_bill << endl;
    cout << "====================================" << endl;
}


int main() {
    string name;
    double units = 0.0;
    double total_bill = 0.0;
    double discount_amount = 0.0;
    double final_amount = 0.0;

    
    getCustomerDetails(name, units);

    
    total_bill = calculateBill(units);

    
    discount_amount = applyDiscount(units, total_bill);

    
    final_amount = total_bill - discount_amount;

    
    displayBill(name, units, total_bill, discount_amount, final_amount);

    return 0;
}