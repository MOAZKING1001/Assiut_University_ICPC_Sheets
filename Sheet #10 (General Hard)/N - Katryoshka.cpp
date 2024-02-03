#include <iostream>
using namespace std;
int main() {
	long long eyes, mouths, bodies, smallest = 0, dolls = 0;
	cin >> eyes >> mouths >> bodies;
	if (eyes < bodies && eyes < mouths) smallest = eyes;
	else if (bodies < mouths) smallest = bodies;
	else smallest = mouths;
	if (eyes && mouths && bodies) {
		dolls = smallest;
		eyes -= smallest;
		bodies -= smallest;
	}
	eyes /= 2;
	if (bodies > eyes) {
		dolls += eyes;
	}
	else {
		dolls += bodies;
	}
	cout << dolls;
}
