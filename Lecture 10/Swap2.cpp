#include<iostream>
using  namespace std;

// void swap(int x, int y) {
// 	int temp = y;
// 	y = x;
// 	x = temp;
// 	cout << endl;
// 	cout << "Value of x Inside Function is " << x << endl;
// 	cout << "Value of y Inside Function is " << y << endl;
// 	return;
// }

//You have made a and b as reference Variable.
void swap(int &a, int &b) {
	int temp = b;
	b = a;
	a = temp;
	cout << endl;
	cout << "Value of a Inside Function is " << a << endl;
	cout << "Value of b Inside Function is " << b << endl;
	return;
}

int main() {
	int x, y;
	cin >> x >> y;

	cout << "Value of x Inside Main is " << x << endl;
	cout << "Value of y Inside Main is " << y << endl;

	// int temp = y;
	// y = x;
	// x = temp;
	// cout << endl;

	//Pass By Value;
	swap(x, y);
	cout << x * 2 << " " << y * 2 << endl;

	cout << endl;
	cout << "Value of x Inside Main is " << x << endl;
	cout << "Value of y Inside Main is " << y << endl;

}