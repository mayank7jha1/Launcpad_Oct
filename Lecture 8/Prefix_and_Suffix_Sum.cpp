#include<iostream>
using  namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	//Prefix Sum
	int pre[n] = {0};

	pre[0] = a[0];
	for (int i = 1; i < n; i += 1) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < n; i += 1) {
		cout << pre[i] << " ";
	}

	cout << endl;

	//Prefix Product
	int pre2[n] = {0};

	pre2[0] = a[0];
	for (int i = 1; i < n; i += 1) {
		pre2[i] = pre2[i - 1] * a[i];
	}

	for (int i = 0; i < n; i += 1) {
		cout << pre2[i] << " ";
	}

	cout << endl;
	for (int i = n - 1; i >= 0; i -= 1) {
		cout << a[i] << " ";
	}

	int suffix[n] = {0};

	suffix[n - 1] = a[n - 1];

	for (int i = n - 2; i >= 0; i -= 1) {
		suffix[i] = suffix[i + 1] + a[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << suffix[i] << " ";
	}

}









