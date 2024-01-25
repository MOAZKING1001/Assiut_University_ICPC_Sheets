#include <iostream>
using namespace std;
int main() {
	long long age;
	cin >> age;
	cout << age / 365 << " years\n";
	cout << (age % 365) / 30 << " months\n";
	cout << (age % 365) % 30 << " days";
}