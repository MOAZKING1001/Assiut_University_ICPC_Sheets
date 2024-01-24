#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> nums(3);
	cin >> nums.at(0) >> nums.at(1) >> nums.at(2);
	cout << *min_element(nums.begin(), nums.end()) << " " << *max_element(nums.begin(), nums.end());
}