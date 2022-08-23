#include <iostream>
using namespace std;
#include <cmath>

int main() {

int P;
double a;
double r;
int t;
const double e = 2.71828;


cout << "Enter principal: " << endl;
cin >> P;
cout << " " << endl;

cout << "Enter annual interest rate (as a decimal): " << endl;
cin >> r;
cout << " " << endl;

cout << "Enter time in years: " << endl;
cin >> t;
cout << " " << endl;

// Formula
a = P * pow(e, r * t); 

cout << "\033[92mThe continuous compound payment is: $" << a << endl; 

cout << endl;
  
return 0;
}