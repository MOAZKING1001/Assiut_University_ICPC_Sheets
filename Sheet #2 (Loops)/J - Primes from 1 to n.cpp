#include <iostream>
using namespace std;
int main() {
	int n, temp = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j < i; j++) {
			if (!(i % j)) {
				temp++;
			}
		}
		if (!temp) cout << i << " ";
		temp = 0;
	}
}
