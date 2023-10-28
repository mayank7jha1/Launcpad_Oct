#include<iostream>
using  namespace std;

int main() {
	// int n;
	// cin >> n;
	// int i = 1;
	// int x;
	// int target;
	// cin >> target;

	// while (i <= n) {
	// 	cin >> x;
	// 	if (x == target) {
	// 		cout << "Yes" << endl;
	// 		return 0;
	// 	}
	// 	i = i + 1;
	// }

	// cout << "No" << endl;

	// int n;
	// cin >> n;

	// int a[n];
	// for (int i = 0; i < n; i++) {
	// 	cin >> a[i];
	// }
	// int target;
	// cin >> target;

	// for (int i = 0; i < n; i++) {
	// 	if (a[i] == target) {
	// 		cout << "Yes" << endl;
	// 		return 0;
	// 	}
	// }

	// cout << "No" << endl;

	int n;
	cin >> n;
	int flag = 0;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;

	for (int i = 0; i < n; i++) {
		if (a[i] == target) {
			flag = 1;
			break;
		}

	}

	if (flag == 0) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

}








