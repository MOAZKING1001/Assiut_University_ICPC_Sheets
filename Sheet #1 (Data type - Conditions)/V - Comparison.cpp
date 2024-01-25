#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	char a;
	cin >> num1 >> a >> num2;
	switch (a) {
		case '>':
			if (num1 > num2) cout << "Right";
			else cout << "Wrong";
			break;
		case '<':
			if (num1 < num2) cout << "Right";
			else cout << "Wrong";
			break;
		case '=':
			if (num1 == num2) cout << "Right";
			else cout << "Wrong";
	}
}
