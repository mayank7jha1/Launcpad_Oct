#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}
	int ans = INT_MIN;
	int ans2 = INT_MAX;
	for (int i = 0; i < n; i += 1) {
		ans = max(ans, a[i]);
		ans2 = min(ans2, a[i]);
	}

	//cout << ans2 << " " << ans << endl;

	int freq[ans - ans2 + 1] = {0};

	for (int i = 0; i < n; i += 1) {
		int x = a[i];
		int x_shifted = a[i] - ans2;
		freq[x_shifted] += 1;
	}

	//Frequency Array Iterate
	for (int i = 0; i < (ans - ans2 + 1); i += 1) {
		if (freq[i] > 0) {
			cout << (i + ans2) << " " << freq[i] << endl;
		}
	}



}

















