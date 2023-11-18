#include<iostream>
using  namespace std;


int main() {

	int n;
	cin >> n;
	int a[n], b[n], c[n];

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i += 1) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i += 1) {
		cin >> c[i];
	}
	int bubble = 0;
	int flag = 0;

	// //Code For Bubble Sort
	for (int i = 0; i < n - 1; i += 1) {
		flag = 0;
		for (int j = 0; j < n - 1 - i; j += 1) {
			bubble += 1;
			if (a[j] > a[j + 1]) {
				flag = 1;
				bubble += 1;
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
		if (flag == 0) {
			break;
		}
	}

	int selection = 0;

	// //Code For Selection Sort
	for (int i = 0; i < n - 1; i += 1) {

		int Minimum_Index = i;
		selection += 1;
		for (int j = i + 1; j < n; j += 1) {
			selection++;
			if (b[j] < b[Minimum_Index]) {
				selection++;
				Minimum_Index = j;
			}
		}
		if (Minimum_Index != i) {
			selection += 4;
			int temp = b[Minimum_Index];
			b[Minimum_Index] = b[i];
			b[i] = temp;
		}
	}

	int insertion = 0;

	// //Code For Insertion Sort
	for (int i = 1; i < n; i += 1) {
		int key = c[i];
		int j = i - 1;
		insertion += 3;

		while ((j >= 0) and (c[j] > key)) {
			insertion += 2;
			c[j + 1] = c[j];
			j = j - 1;
		}

		insertion += 1;
		c[j + 1] = key;
	}

	cout << bubble << endl;
	cout << selection << endl;
	cout << insertion << endl;
	// for (int i = 0; i < n; i += 1) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// for (int i = 0; i < n; i += 1) {
	// 	cout << b[i] << " ";
	// }
	// cout << endl;

	// for (int i = 0; i < n; i += 1) {
	// 	cout << c[i] << " ";
	// }
	// cout << endl;
}