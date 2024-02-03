#include <iostream>
using namespace std;
int main() {
	long long n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	long long res = n1 % 100 * n2 % 100 * n3 % 100 * n4 % 100;
	if (res % 100 < 10) cout << "0" << res % 100;
	else cout << res % 100;
}
