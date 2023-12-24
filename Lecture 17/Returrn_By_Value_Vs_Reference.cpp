#include<iostream>
using  namespace std;


// int Sum(int a, int b) {
// 	int c = a + b;
// 	return c;//Return By Value
// }

//Dangling Reference
//Global Variables or Static Variables
int c;
int &Sum2(int a, int b) {
	// static int c = a + b;
	c = a + b;
	return c;//Return By Value
}


int main() {
	int x = 30, y = 50;
	int &e = Sum2(x, y);
	cout << e << endl;


	//Reference Variables:
	// 1. Reference Variables cannot
	// be left uninitialised.
	// int m = 300;
	// int &z = m;

	//2. Reference Variables cannot
	//be reseated.(This is not reinitialised).

	// int o = 500;
	// z = o;

	// cout << z << " " << o << " " << m << endl;
}






