#include <iostream>
#include <string>
using namespace std;
bool algorithm(string str1, string str2) {
	string original2 = str2;
	if (str1 == str2) return true;
	for (int i = 0, j = 0; i < str1.length(); i++, j++) {
		for (int j = 0; j < str1.length(); j++) {
			swap(str1[i], str1[j]);
			if (str1 == str2) return true;
			str2 = original2;
		}
	}
	return false;
}
int main() {
	string str1, str2;
	cin >> str1;
	cin >> str2;
	cout << algorithm(str1, str2);
}
