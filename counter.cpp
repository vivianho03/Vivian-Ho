#include <iostream>
using namespace std;

int main() {

int penny = 1;
int nickel = 5;
int dime = 10;
int quarter = 25;

int p;
int n;
int d;
int q;

int sum;
int a;
int b;

cout << "Please enter the number of coins:" <<endl;

cout << "# of quarters: ";
cin >> q;

cout << "# of dimes: ";
cin >> d;

cout << "# of nickels: ";
cin >> n;


cout << "# of pennies: ";
cin >>  p;


 sum = (p * penny) + (n * nickel) + (d *dime) + (q * quarter);

a = sum / 100;
b = sum % 100;

  cout << "The total is " << a << " dollars and " << b << " cents" << endl;
 return 0;
}
