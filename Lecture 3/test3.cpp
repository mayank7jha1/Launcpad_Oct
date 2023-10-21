#include<iostream>
using  namespace std;
int x = 350;

int main() {
	int x = 450;
	x = x + 1;

	if (x > 300) {
		int x = 250;
		x = x - 10;
		if (x > 100) {
			x = x - 100;
			if (x > 50) {
				x = 500;
				x = x + 400;
			}
			cout << x << endl;
			x = x - 1;
		}
		cout << x + 10 << endl;
	}
	cout << x - 100 << endl;
}



