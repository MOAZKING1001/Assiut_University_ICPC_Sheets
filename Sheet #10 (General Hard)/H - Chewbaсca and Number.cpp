#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
using namespace std;
int algorithm(int num) {
	string temp = to_string(num);
	for (int i = 0; i < temp.length(); i++) {
		if (temp[i] - '0' >= 5) temp[i] = 9 - (temp[i] - '0') + '0';
	}
	return stoi(temp);
}
int main() {
	cout << algorithm(27);
}
