#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
   double weight_pounds, height_inches;
 
  cout << "Enter your weight in pounds: ";
  cin >> weight_pounds;
 
  cout << "Enter your height in inches: ";
  cin >> height_inches;

 double bmi = (weight_pounds / (pow(height_inches, 2))) * 703;
 
  if (bmi < 18.5) {
    cout << "You are underweight." << endl;
  } else if (bmi >= 18.5 && bmi < 25.0) {
    cout << "You have a normal weight." << endl;
  } else if (bmi >= 25.0 && bmi < 30.0) {
    cout << "You are overweight." << endl;
  } else {
    cout << "You are obese." << endl;
  }
 
  return 0;
}
 