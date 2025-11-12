#include "customer.h"
#include <iostream>
using namespace std;

int main() {
    // Create PrepaidCustomer and PostpaidCustomer objects
    PrepaidCustomer preCustomer("P123", "Alice", 50.0);
    PostpaidCustomer postCustomer("P456", "Bob", 0.0);

    // Display details
    preCustomer.displayDetails();
    postCustomer.displayDetails();

    // Prepaid actions
    preCustomer.makeCall(20); // Make a call
    preCustomer.credit(30);   // Add credit

    // Postpaid actions
    postCustomer.makeCall(40); // Make a call
    postCustomer.credit(50);   // Pay outstanding balance

    // Display updated details
    preCustomer.displayDetails();
    postCustomer.displayDetails();

    return 0;
}
