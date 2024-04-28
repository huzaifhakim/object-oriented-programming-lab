#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

// This step requires the user to input the type of vehicle
string car_type;
cout << "Enter the type of vehicle: ";
getline (cin,car_type);

// This step requires the user to input the purchase price of the car
double purchase_price;
cout << "Enter the purchase price of the car: ";
cin >> purchase_price;



// This step requires the user to input the interest rate
float interest_rate;
cout << "Enter the annual interest rate:";
cin >> interest_rate;

// This step calcuates the interest rate
double interest;
interest = interest_rate / 100;

// This step defines the number of payments per year
int payments_year;
payments_year = 12;

// This step calculates the monthly payment
double monthly_payment;
monthly_payment = principle*rate/(1.0-pow(rate+1,-term));
// This step calculates the number of payments
double number_payments;
number_payments = years - monthly_payment;

// This step calculates the total amount owed
double total_amount_owed;
total_amount_owed = number_payments * monthly_payment;

// This step calculates the total interest paid
double total_interest_paid;
total_interest_paid = monthly_payment * number_payments - amount_financed;

// This step calculates the number of payments
double number_payments;
number_payments = years - monthly_payment;

// This step calculates the total amount owed
double total_amount_owed;
total_amount_owed = number_payments * monthly_payment;

cout << left;
cout << setw(40) << "Monthly Car Loan Payment Calculation" << endl;
cout << setw(40) << "========================================" << endl;
cout << setw(40) << "Type of Vehicle:" << car_type << endl;
cout << setw(40) << "Purchase Price:" << purchase_price << endl;
cout << setw(40) << "Amount Financed:" << amount_financed << endl;
cout << setw(40) << "Monthly Payment:" << monthly_payment << endl;
cout << setw(40) << "Number of Payments:" << number_payments << endl;
cout << setw(40) << "Total Amount Owed:" << total_amount_owed << endl;
cout << setw(40) << "Total Interest Paid:" << total_interest_paid << endl;

}