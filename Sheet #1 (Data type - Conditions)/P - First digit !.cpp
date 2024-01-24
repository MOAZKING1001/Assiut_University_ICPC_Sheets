#include <iostream>
#include <string>
using namespace std;
int main() {
	string num;
	cin >> num;
	if ((num.front() - '0') % 2) {
		cout << "ODD";
	}
	else {
		cout << "EVEN";
	}
}