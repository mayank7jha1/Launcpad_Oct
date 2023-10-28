#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	//Code For Bubble Sort
	for (int i = 0; i < n - 1; i += 1) {
		//ith Largest element ki baat kar raha hu.
		for (int j = 0; j < n - 1 - i; j += 1) {

			if (a[j] > a[j + 1]) {
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}

		}
	}

	for (int i = 0; i < n; i += 1) {
		cout << a[i] << " ";
	}
}





