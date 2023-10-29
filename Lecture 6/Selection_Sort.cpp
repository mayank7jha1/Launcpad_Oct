#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i += 1) {

		int Minimum_Index = i;

		for (int j = i + 1; j < n; j += 1) {
			if (a[j] < a[Minimum_Index]) {
				Minimum_Index = j;
			}
		}

		if (Minimum_Index != i) {
			int temp = a[Minimum_Index];
			a[Minimum_Index] = a[i];
			a[i] = temp;
		}
	}

	for (int i = 0; i < n; i += 1) {
		cout << a[i] << " ";
	}
}