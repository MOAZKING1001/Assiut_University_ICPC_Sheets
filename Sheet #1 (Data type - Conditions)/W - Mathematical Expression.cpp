#include <iostream>
using namespace std;
int main() {
	long long num1, num2, res;
	char op, temp;
	cin >> num1 >> op >> num2 >> temp >> res;
	switch (op) {
		case '+':
			if (num1 + num2 == res) cout << "Yes";
			else cout << num1 + num2;
			break;
		case '-':
			if (num1 - num2 == res) cout << "Yes";
			else cout << num1 - num2;
			break;
		case '*':
			if (num1 * num2 == res) cout << "Yes";
			else cout << num1 * num2;
			break;
	}
}