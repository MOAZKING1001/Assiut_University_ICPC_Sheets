#include <iostream>
using namespace std;
int main() {
   long long n, inp1, inp2;
   cin >> n;
   for (long long i = 0, k = 0; i < n; i++, k = 0) {
      cin >> inp1 >> inp2;
      if (((inp1 * (inp1 + 1)) / 2) < inp2) {
         cout << -1 << "\n";
         continue;
      }
      for (long long j = inp1; j >= 0; j--) {
         if (k + j <= inp2) k += j;
         else continue;
         cout << j << " ";
         if (k == inp2) break;
      }
      cout << "\n";
   }
}