#include <iostream>
using namespace std;
int main() {
   long long n, start, end;
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> start >> end;
      if (end > start) {
         cout << ((end * (end + 1)) / 2) - (((start - 1) * (start)) / 2) << "\n";
      }
      else {
         cout << ((start * (start + 1)) / 2) - (((end - 1) * (end)) / 2) << "\n";
      }
   }
}