#include <iostream>
#include <string>
using namespace std;
int main() {
	string num;
	cin >> num;
	for (int i = 0; i < num.length(); i++) {
		if (num[i] >= '5' && num[i] <= '9') {
			if (i == 0 && num[i] == '9') continue;
			num[i] = '9' - num[i] + '0';
		}
	}
	cout << num;
}
