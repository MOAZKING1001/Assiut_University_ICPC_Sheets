#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	if (!((num % 10) % ((num / 10) % 10)) || !(((num / 10) % 10) % (num % 10))) cout << "YES";
	else cout << "NO";
}
