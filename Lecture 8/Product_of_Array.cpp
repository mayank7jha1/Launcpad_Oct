#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	int pre[n] = {0};
	pre[0] = 1;

	for (int i = 1; i < n; i += 1) {
		pre[i] = pre[i - 1] * a[i - 1];
	}

	// for (int i = 0; i < n; i += 1) {
	// 	cout << pre[i] << " ";
	// }

	int suffix[n] = {0};
	suffix[n - 1] = 1;

	for (int i = n - 2; i >= 0; i -= 1) {
		suffix[i] = suffix[i + 1] * a[i + 1];
	}

	// cout << endl;
	// for (int i = 0; i < n; i += 1) {
	// 	cout << suffix[i] << " ";
	// }

	int product[n];

	for (int i = 0; i < n; i += 1) {
		product[i] = pre[i] * suffix[i];
	}
	//cout << endl;
	for (int i = 0; i < n; i += 1) {
		cout << product[i] << " ";
	}

}






