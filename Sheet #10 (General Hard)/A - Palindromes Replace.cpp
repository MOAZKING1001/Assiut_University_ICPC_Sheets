#include <iostream>
#include <string>
using namespace std;
string algorithm(string text) {
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == '?') text[i] = text[text.length() - 1 - i];
	}
	return text;
}
int main() {
	cout << algorithm("a?z?");
}
