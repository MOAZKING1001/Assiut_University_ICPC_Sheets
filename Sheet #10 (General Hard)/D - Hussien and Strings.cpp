#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
using namespace std;
string algorithm(string str1, string str2) {
	string original2 = str2;
	if (str1 == str2) return "True";
	for (int i = 0, j = 0; i < str1.length(); i++, j++) {
		for (int j = 0; j < str1.length(); j++) {
			swap(str1[i], str1[j]);
			if (str1 == str2) return "True";
			str2 = original2;
		}
	}
	return "False";
}
int main() {
	cout << algorithm("hello", "heoll");
}