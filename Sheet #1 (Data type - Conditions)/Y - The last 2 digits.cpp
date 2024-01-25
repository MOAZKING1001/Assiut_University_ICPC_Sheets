#include <iostream>
#include <string>
using namespace std;
int main() {
	unsigned long long n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	string temp = to_string(n1 * n2 * n3 * n4);
	cout << *(temp.end() - 2) << *(temp.end() - 1);
}