#include <iostream>
using namespace std;
int main() {
	int n, temp, temp2 = 0, ones = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		while (temp) {
			if (temp % 2) ones++;
			temp /= 2;
		}
		for (int i = 0, j = 1; i < ones; i++, j = j * 2 + 1) temp2 = j;
		cout << temp2 << "\n";
		ones = 0;
	}
}
