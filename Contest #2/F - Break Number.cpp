#include <iostream>
using namespace std;
int main() {
   long long n, current_number, counter = 0, max_counter = 0;
   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> current_number;
      while (!(current_number % 2)) {
         current_number /= 2;
         counter++;
      }
      if (counter > max_counter) max_counter = counter;
      counter = 0;
   }
   cout << max_counter;
}