#include <iostream> <string>
using namespace std;

int main() {

double penny = 0.01;
double nickel = 0.05;
double dime = 0.10;
double quarter = 0.25;

double a, b, c, d, e, p, q;
double sum;
double p = a * penny;
double n = b * nickel;
double d = c * dime;
double q = e * quarter;

cout << "Number of penny: ";
cin >> a;
cout << "Number of nickel: ";
cin >> b;
cout << "Number of dime: ";
cin >> c;
cout << "Number of quarter: ";
cin >> e;
 sum = p + n + d + q;
 cout << "Sum of coins: "; <<sum;
return 0;
}
