#include<iostream>
using  namespace std;

int main() {


	// int n;
	// cin >> n;

	// int a[n] = {0};

	// for (int i = 0; i < n; i += 1) {
	// 	cin >> a[i];
	// }

	// for (int i = 0; i < n; i += 1) {
	// 	cout << a[i] << " ";
	// }

	// int n;
	// cin >> n;

	//char a[100] = {0};

	// for (int i = 0; i < n; i += 1) {
	// 	cin >> a[i];
	// }
	//cin >> a;

	// for (int i = 0; i < n; i += 1) {
	// 	cout << a[i] << " ";
	// }
	//cout << a;


	int a1[] = {1, 2, 3, 4, 5};
	char ch[] = {'M', 'A', 'Y', 'A', 'N', 'K', '\0'};
	char ch1[] = {"Mayank"};

	cout << ch << endl;

	int count = 0;

	for (int i = 0; ch1[i] != '\0'; i += 1) {
		count += 1;
	}
	cout << count << endl;


}