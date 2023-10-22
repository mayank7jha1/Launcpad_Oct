// A person wants to go from origin to a particular
// location, he can move in only 4 directions
// (i.e East, West, North, South) but his friend gave him
// a long route, help a person to find minimum
// Moves so that he can reach to the destination.

// Input – NESNWES
// Output – E

// You need to print the lexicographically sorted
// word(dictionary orderr).
//Assume the word will have only ‘E’ ‘N’ ‘S’
// ‘W’ characters.

// E.g – SSSNEEEW
// output – EESS

#include<iostream>
using  namespace std;

int main() {
	// int n;
	// cin >> n;

	// char x;
	// while (cin >> x) {
	// 	cout << x << endl;
	// }

	char ch;
	int x = 0, y = 0;

	while (cin >> ch) {

		if (ch == 'N') {
			y = y + 1;
		} else if (ch == 'S') {
			y = y - 1;
		} else if (ch == 'W') {
			x = x - 1;
		} else {
			x = x + 1;
		}
	}

	if (x > 0) {

		while (x > 0) {
			cout << 'E';
			x = x - 1;
		}

		while (y > 0) {
			cout << 'N';
			y = y - 1;
		}

		while (y < 0) {
			cout << 'S';
			y = y + 1;
		}

	} else {

		while (y > 0) {
			cout << 'N';
			y = y - 1;
		}

		while (y < 0) {
			cout << 'S';
			y = y + 1;
		}

		while (x < 0) {
			cout << 'W';
			x = x + 1;
		}

	}

}