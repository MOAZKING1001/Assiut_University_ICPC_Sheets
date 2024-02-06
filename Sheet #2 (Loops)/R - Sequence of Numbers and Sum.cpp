#include <iostream>
using namespace std;
int main() {
	int n = 1, m = 1, sum = 0, biggest, smallest;
	while (true) {
		cin >> n >> m;
		if (n < 1 || m < 1) {
			break;
		}
		biggest = max(n, m);
		smallest = min(n, m);
		for (int i = smallest; i <= biggest; i++) {
			cout << i << " ";
			sum += i;
		}
		cout << "sum =" << sum << "\n";
		sum = 0;
	}
}
