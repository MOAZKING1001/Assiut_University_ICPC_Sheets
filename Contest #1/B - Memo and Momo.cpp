#include <iostream>
using namespace std;
int main() {
	long long a, b, k;
	cin >> a >> b >> k;
	if (a % k && b % k) cout << "No One";
	else if (!(a % k) && b % k) cout << "Memo";
	else if (a % k && !(b % k)) cout << "Momo";
	else cout << "Both";
}
