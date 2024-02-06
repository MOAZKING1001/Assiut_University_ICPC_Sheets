#include <iostream>
using namespace std;
int main() {
	int n, n1, n2, biggest, smallest, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n1 >> n2;
		biggest = max(n1, n2);
		smallest = min(n1, n2);
		for (int j = smallest + 1; j < biggest; j++) {
			if (j % 2) sum += j;
		}
		cout << sum << "\n";
		sum = 0;
	}
}
