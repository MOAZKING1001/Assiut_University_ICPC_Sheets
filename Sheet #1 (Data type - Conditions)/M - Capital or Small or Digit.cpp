#include <iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (a >= '0' && a <= '9') {
		cout << "IS DIGIT";
		return 0;
	}
	if (a >= 'a' && a <= 'z') {
		cout << "ALPHA" << "\n";
		cout << "IS SMALL";
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "ALPHA" << "\n";
		cout << "IS CAPITAL";
	}
}
