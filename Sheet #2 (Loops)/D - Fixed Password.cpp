#include <iostream>
using namespace std;
int main() {
	int pass = 1999;
	int temp;
	while (true) {
		cin >> temp;
		if (temp == pass) {
			cout << "Correct";
			break;
		}
		cout << "Wrong\n";
	}
}
