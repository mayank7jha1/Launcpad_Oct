#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int pre[n] = {0};

	pre[0] = a[0];

	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (ans < pre[i]) {
			ans = pre[i];
		}
	}

	int freq[ans + 1] = {0};

	for (int i = 0; i < n; i++) {
		int Element = pre[i];
		freq[Element] += 1;
	}

	for (int i = 0; i < ans + 1; i += 1) {

		if (i == 0 and freq[i] > 0) {
			cout << "Yes" << endl;
			return 0;

		} else {

			if (freq[i] > 1) {
				cout << "Yes" << endl;
				return 0;
			}

		}
	}

	cout << "No" << endl;


}








