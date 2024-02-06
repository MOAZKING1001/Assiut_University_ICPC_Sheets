#include <iostream>
#include <string>
using namespace std;
int main() {
	char a;
	int n1, n2;
	cin >> a >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> n2;
		cout << string(n2, a) << "\n";
	}
}
