#include <iostream>
using namespace std;
int main() {
	int n1, n2, gcd = 0;
	cin >> n1 >> n2;
	int biggest = max(n1, n2);
	int smallest = min(n1, n2);
	for (int i = smallest; i > 0; i--) {
		if (!(n1 % i) && !(n2 % i)) {
			gcd = i;
			break;
		}
	}
	cout << gcd;
}
