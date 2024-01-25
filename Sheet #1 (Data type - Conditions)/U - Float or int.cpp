#include <iostream>
using namespace std;
int main() {
	double num;
	cin >> num;
	int num2 = num;
	if (num == num2) cout << "int " << num2;
	else cout << "float " << num2 << " " << num - num2;
}
