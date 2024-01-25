#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> nums(3);
	for (int i = 0; i < 3; i++) cin >> nums.at(i);
	vector<int> nums2 = nums;
	sort(nums2.begin(), nums2.end());
	for (int i = 0; i < 3; i++) cout << nums2.at(i) << "\n";
	cout << "\n";
	for (int i = 0; i < 3; i++) cout << nums.at(i) << (i != 2 ? "\n" : "");
}
