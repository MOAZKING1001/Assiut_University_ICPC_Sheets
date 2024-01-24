#include <iostream>
using namespace std;
int main() {
	long long num1, num2;
	cin >> num1 >> num2;
	if (num2 % num1 && num1 % num2) {
		cout << "No Multiples";
	}
	else {
		cout << "Multiples";
	}
}
