#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int biggest = -99999, j;
	for (int i = 0; i < n; i++) {
		cin >> j;
		if (j > biggest) biggest = j;
	}
	cout << biggest;
}
