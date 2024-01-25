#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	if (pow(num1, num2) > pow(num3, num4)) cout << "YES";
	else cout << "NO";
}