#include<iostream>
using  namespace std;
#define PI 3.14159265
const int m = 50;

#define f(a,b) for (int i = a; i < b; i++)
#define int long long


/*
	Macros:
	#define
	You can make constants by:
	1. Macros(#define)
	2. Const Keyword
*/

int32_t main() {
	// cout << 54 / 19.0 << endl;
	// cout << (double)PI << endl;
	// int x = 50;
	// int y = 90;
	int n;
	cin >> n;
	int a[n];
	f(0, 5) {
		cin >> a[i];
	}
	f(0, 5) {
		cout << a[i] << " ";
	}
}



