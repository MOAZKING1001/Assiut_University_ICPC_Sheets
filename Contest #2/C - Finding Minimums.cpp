#include <iostream>
using namespace std;
int main() {
    int count, groups;
    cin >> count >> groups;
    int nums[count];
    for (int i = 0, k = INT32_MAX; i < count; i += groups, k = INT32_MAX) {
        for (int j = i; j < i + groups && j < count; j++) {
            cin >> nums[j];
        }
        for (int j = i; j < i + groups && j < count; j++) {
            if (nums[j] < k) k = nums[j];
        }
        cout << k << "\n";
    }
}