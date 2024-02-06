#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1, j = n - 1; i <= n; i++, j--) {
		cout << string(j, ' ');
		cout << string(i * 2 - 1, '*') << "\n";
	}
}
