#include <iostream>
#include <string>
using namespace std;
void solution1() {
	int n; 
    cin >> n;
    int num1 = n;
    int num2 = 0;
    while (n) {
        num2 *= 10;
        num2 += n % 10;
        n /= 10;
    }
    cout << num2 << "\n";
    if (num1 != num2) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}
void solution2() {
	string num;
	cin >> num;
	int realNum1, realNum2;
	realNum1 = stoi(num);
	reverse(num.begin(), num.end());
	realNum2 = stoi(num);
	cout << realNum2 << "\n";
	if (realNum1 != realNum2) {
		cout << "NO";
		return 0;
	}
	cout << "YES";
}

int main() {
	solution1();
}