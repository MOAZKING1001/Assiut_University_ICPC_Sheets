#include <iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (!x && !y) cout << "Origem";
	else if (!x && y) cout << "Eixo Y";
	else if (x && !y) cout << "Eixo X";
	else if (x > 0 && y > 0) cout << "Q1";
	else if (x < 0 && y > 0) cout << "Q2";
	else if (x < 0 && y < 0) cout << "Q3";
	else if (x > 0 && y < 0) cout << "Q4";
}