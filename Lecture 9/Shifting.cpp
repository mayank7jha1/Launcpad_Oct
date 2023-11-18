#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	// int a[n + 2] = {};
	int a[n + 2] = {0};

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	int j = n - 1;

	while (j >= 0) {

		//Shifting:
		a[j + 2] = a[j];

		j = j - 1;
	}

	a[0] = 0;
	a[1] = 0;

	for (int i = 0; i < n + 2; i += 1) {
		cout << a[i] << " ";
	}


}