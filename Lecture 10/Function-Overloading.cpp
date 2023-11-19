#include<iostream>
using  namespace std;

int Sum(int a, int b) {
	// int ans = a + b;
	// return ans;
	return (a + b);
}

double Sum(double a, double b) {
	return a + b;
}

int Sum(int a, int b, int c) {
	return (a + b + c);
}

double Sum(int a, double b, double c) {
	return (a + b + c);
}



int main() {
	cout << Sum(10, 20) << endl;
	cout << Sum(10.5, 9.7) << endl;
	cout << Sum(10, 12, 19) << endl;
	cout << Sum(10, 12.4, 13.5) << endl;
}





