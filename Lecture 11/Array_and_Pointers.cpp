#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	cout << a << endl;
	cout << a + 0 << endl;
	cout << a + 1 << endl;
	cout << *(a + 1) << endl;
	cout << a[1] << endl;
	//[]--->Overloaded:


}

// 140702035515408
// 140702035515412