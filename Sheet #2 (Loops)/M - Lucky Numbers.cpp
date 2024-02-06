#include <iostream>
using namespace std;
int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int temp = 0, temp2 = 0;
	bool temp3 = true;
	for (int i = n1; i <= n2; i++) {
		temp = i;
		while (temp) {
			if (temp % 10 != 7 && temp % 10 != 4) temp2++;
			temp /= 10;
		}
		if (!temp2) {
			cout << i << " ";
			temp3 = false;
		}
		temp2 = 0;
	}
	if (temp3) cout << "-1";
}
