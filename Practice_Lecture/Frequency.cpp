#include<iostream>
#include<algorithm>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	//Brute Force 1: CT is of Order (n^2);
	// sort(a, a + n);//nlogn

	// for (int i = 0; i < n; i += 1) {
	// 	int ce = a[i], cec = 0;
	// 	if (ce < 0) {
	// 		continue;
	// 	}
	// 	for (int j = 0; j < n; j += 1) {
	// 		if (a[j] == ce) {
	// 			cec += 1;
	// 			a[j] = -1;
	// 		}
	// 	}

	// 	if (ce != -1) {
	// 		cout << "Current Element is " << ce;
	// 		cout << " and Its Frequency is " << cec << endl;
	// 	}
	// }


	//Brute Force 2: nlogn+2*n = (nlogn)

	// sort(a, a + n);//nlogn

	// for (int i = 0; i < n; i += 1) {

	// 	int ce = a[i], cec = 0;

	// 	if (ce < 0) {
	// 		continue;
	// 	}

	// 	for (int j = i; j < n; j += 1) {

	// 		if (a[j] == ce) {
	// 			cec += 1;
	// 			a[j] = -1;
	// 		}

	// 	}

	// 	if (ce != -1) {
	// 		cout << "Current Element is " << ce;
	// 		cout << " and Its Frequency is " << cec << endl;
	// 	}
	// }


	//Optimised Approach : Frequency Array : n

	int ans = INT_MIN;
	for (int i = 0; i < n; i += 1) {
		ans = max(ans, a[i]);
	}

	int freq[ans + 1] = {0};

	for (int i = 0; i < n; i += 1) {
		int ce = a[i];
		freq[ce] += 1;
	}

	for (int i = 0; i < ans + 1; i += 1) {
		if (freq[i] > 0) {
			cout << i << " " << freq[i] << endl;
		}
	}

	//cout << freq[3] << endl;

}











