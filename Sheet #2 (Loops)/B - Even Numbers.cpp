#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i += 2) {
		cout << i << "\n";
	}
	if (n < 2) cout << "-1";
}