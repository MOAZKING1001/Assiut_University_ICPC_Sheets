#include <iostream>
using namespace std;
int main() {
	int n, a, b, sum = 0, temp = 0;
	cin >> n >> a >> b;
	for (int i = 1, j = i; i <= n; i++) {
		j = i;
		while (j) {
			temp += j % 10;
			j /= 10;
		}
		if (temp >= a && temp <= b) sum += i;
		temp = 0;
	}
	cout << sum;
}
