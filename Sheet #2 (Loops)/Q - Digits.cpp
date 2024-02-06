#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	string temp, temp2 = "";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		for (int j = temp.length() - 1; j >= 0; j--) {
			temp2 += temp[j];
			if (j != 0) temp2 += ' ';
		}
		cout << temp2 << "\n";
		temp2 = "";
	}
}
