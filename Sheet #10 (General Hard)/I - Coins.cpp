#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<string> expresions;
	vector<int> evaluations{ 0, 0, 0 };
	vector<char> coins{ 'A', 'B', 'C' };
	string result = "";
	for (int i = 0; i < 3; i++) {
		string temp;
		getline(cin, temp);
		temp[0] = toupper(temp[0]);
		temp[2] = toupper(temp[2]);
		expresions.push_back(temp);
	}
	for (int i = 0; i < expresions.size(); i++) {
		if (expresions.at(i)[1] == '>') evaluations.at((find(coins.begin(), coins.end(), expresions.at(i)[0])) - coins.begin())++;
		else if (expresions.at(i)[1] == '<') evaluations.at((find(coins.begin(), coins.end(), expresions.at(i)[2])) - coins.begin())++;
	}
	result += coins.at(find(evaluations.begin(), evaluations.end(), 0) - evaluations.begin());
	result += coins.at(find(evaluations.begin(), evaluations.end(), 1) - evaluations.begin());
	result += coins.at(find(evaluations.begin(), evaluations.end(), 2) - evaluations.begin());
	cout << result;
}
