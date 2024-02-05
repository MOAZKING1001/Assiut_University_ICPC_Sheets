#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int total = a + b;
	if (!a && !b) {
		cout << "NO";
		return 0;
	}
	if (total % 2) {
		if (a > b) {
			if (total / 2 + 1 >= a && total / 2 >= b) cout << "YES";
			else cout << "NO";
		}
		else {
			if (total / 2 >= a && total / 2 + 1 >= b) cout << "YES";
			else cout << "NO";
		}
	}
	else {
		if (total / 2 >= a && total / 2 >= b) cout << "YES";
		else cout << "NO";
	}
}