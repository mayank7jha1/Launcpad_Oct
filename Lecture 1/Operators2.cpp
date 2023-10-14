#include<iostream>
using  namespace std;

int main() {
	//2. Relational Operator:  >,<,>=,<=

	int a, b, c;
	cin >> a >> b >> c;

	if ((a > b) and (a > c)) {
		cout << a << " is the greatest " << endl;
	} else if (b > a && b > c) {
		cout << b << " is the greatest " << endl;
	} else {
		cout << c << " is the greatest " << endl;
	}
}