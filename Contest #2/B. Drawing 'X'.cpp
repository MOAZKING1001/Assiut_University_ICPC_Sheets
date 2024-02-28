#include <iostream>
#include <string>
using namespace std;
int main() {
   int n;
   string output = "";
   cin >> n;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if (i == n / 2 && j == i) output += 'X';
         else if (i == j) output += '\\';
         else if (i == n - 1 - j) output += '/';
         else output += '*';
      }
      output += '\n';
   }
   cout << output;
}
