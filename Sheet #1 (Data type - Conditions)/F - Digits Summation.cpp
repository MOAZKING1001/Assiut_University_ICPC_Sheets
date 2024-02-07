#include <iostream>
#include <string>
using namespace std;
int main() {
	string num1, num2;
	cin >> num1 >> num2;
	cout << num1.back() - '0' + num2.back() - '0';
}
