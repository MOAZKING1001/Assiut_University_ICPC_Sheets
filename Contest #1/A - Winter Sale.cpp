#include <iostream>
using namespace std;
int main() {
	double discount, new_price;
	cin >> discount >> new_price;
	new_price *= 100;
	double new_discount = 100 - discount;
	cout << new_price / new_discount;
}
