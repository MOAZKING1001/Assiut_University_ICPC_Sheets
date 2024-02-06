#include <iostream>
using namespace std;
int main() {
	long long n, temp, sum = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		for (int j = 1; j <= temp; j++) {
			sum *= j;
		}
		cout << sum << "\n";
		sum = 1;
	}
}
