#include <iostream>
using namespace std;
int main() {
	long long n, m, k, min, dolls = 0;
	cin >> n >> m >> k;
	if (n < m && n < k) min = n;
	else if (m < k) min = m;
	else min = k;
	if (n && m && k) {
		dolls += min;
		n -= min;
		m -= min;
		k -= min;
	}
	n /= 2;
	if (n <= k) dolls += n;
	else dolls += k;
	cout << dolls;
}