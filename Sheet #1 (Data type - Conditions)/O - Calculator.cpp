#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int num1, num2, opIndex;
	char op;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
			opIndex = i;
			op = input[i];
			break;
		}
	}
	num1 = stoi(string(input.begin(), input.begin() + opIndex));
	num2 = stoi(string(input.begin() + opIndex + 1, input.end()));
	switch (op) {
		case '+':
			cout << num1 + num2;
			break;
		case '-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case '/':
			cout << num1 / num2;
	}
}
