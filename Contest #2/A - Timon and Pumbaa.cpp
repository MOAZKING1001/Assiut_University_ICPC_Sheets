#include <iostream>
using namespace std;
int main() {
	long long a, b;
	cin >> a >> b;
	if (b > a) {
		cout << 0;
		return 0;
	}
	cout << a - b;
}
