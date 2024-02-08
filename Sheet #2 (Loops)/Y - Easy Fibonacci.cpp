#include <iostream>
using namespace std;
int main() {
	int n, temp, last = 1, before_last = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i <= 1) {
			cout << i << " ";
			continue;
		}
		temp = last + before_last;
		before_last = last;
		last = temp;
		cout << temp << " ";
	}
}
