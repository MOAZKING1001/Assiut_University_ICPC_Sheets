#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1, j = n - 1; i <= n; i++, j--) {
		cout << string(j, ' ');
		cout << string(i * 2 - 1, '*') << "\n";
	}
	for (int i = 0, j = n; i < n; i++, j--) {
		cout << string(i, ' ');
		cout << string(j * 2 - 1, '*') << "\n";
	}
}
