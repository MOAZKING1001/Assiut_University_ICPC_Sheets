#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
   long double seat, row, colomn;
   cin >> seat;
   row = ceil((seat + 1) / 4.0) - 1;
   if (fmod(row, 2)) colomn = 3 - fmod(seat, 4);
   else colomn = fmod(seat, 4);
   cout << fixed << setprecision(0) << row << ' ' << colomn;
}