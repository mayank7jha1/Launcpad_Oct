#include<iostream>
using  namespace std;

int main() {

	char ch;

	while (cin >> ch) {

		if (ch >= 65 and ch <= 90) {
			ch = ch + 32;
		} else {
			ch = ch - 32;
		}

		cout << ch;
	}
}