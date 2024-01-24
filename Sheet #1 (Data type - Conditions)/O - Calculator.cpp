#include <iostream>
#include <string>
using namespace std;
int main() {
	string input;
	string temp = "";
	char operation;
	int nums[2];
	getline(cin, input);
	for (int i = 0, j = 0; i < input.length(); i++) {
		if (input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && i != input.length() - 1) {
			temp += input[i];
		}
		else {
			if (i == input.length() - 1) {
				temp += input[i];
			}
			else {
				operation = input[i];
			}
			nums[j] = stoi(temp);
			j++;
			temp = "";
		}
	}
	switch (operation) {
		case '+':
			cout << nums[0] + nums[1];
			break;
		case '-':
			cout << nums[0] - nums[1];
			break;
		case '*':
			cout << nums[0] * nums[1];
			break;
		case '/':
			cout << nums[0] / nums[1];
	}
}
