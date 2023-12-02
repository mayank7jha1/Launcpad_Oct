#include<iostream>
using  namespace std;

int main() {
	long long n, m;
	cin >> n >> m;

	long long ans = -1;
	if (m >= n) {
		cout << n << endl;
		return 0;
	}

	long long s = 0;
	long long e = 10000000000;
	long long target = n - m;


	while (s <= e) {
		long long mid = (s + e) / 2;
		long long p = (mid * (mid + 1)) / 2;
		if (p >= target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	cout << ans + m << endl;
}








