#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		cout << string(i, '*') << "\n";
	}
}
