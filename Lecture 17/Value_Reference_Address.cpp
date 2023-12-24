#include<iostream>
using  namespace std;


// //Pass By Value
// int Sum(int a, int b) {
// 	int c = a + b;
// 	return c;
// }


// //Pass By Reference
// int Sum2(int &a, int &b) {
// 	int c = a + b;
// 	return c;
// }

// //Pass By Address
int Sum3(int *a, int *b) {
	int c = *a + *b;
	return c;
}


int main() {
	int m = 100;
	int n = 200;
	//int z = Sum(m, n);
	//cout << z << endl;

	// int y = Sum2(m, n);
	// cout << y << endl;
	int t = Sum3(&m, &n);
	cout << t << endl;

	// cout << z << " " << y << " " << t << endl;
}





