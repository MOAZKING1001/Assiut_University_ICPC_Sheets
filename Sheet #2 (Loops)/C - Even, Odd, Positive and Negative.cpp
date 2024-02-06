#include <iostream>
using namespace std;
int main() {
	int count;
	cin >> count;
	int j, even = 0, odd = 0, positive = 0, negative = 0;
	for (int i = 0; i < count; i++) {
		cin >> j;
		if (j > 0) positive++;
		else if (j < 0) negative++;
		if (j % 2) odd++;
		else even++;
	}
	cout << "Even: " << even << "\n";
	cout << "Odd: " << odd << "\n";
	cout << "Positive: " << positive << "\n";
	cout << "Negative: " << negative << "\n";
}
