#include<iostream>
#include<algorithm>
using  namespace std;
#define As 200005
#define int long long
int cost[As] = {0};
int n, p, k;

//Dp[i]: Price to buy upto ith index.

int Price() {
	int dp[As] = {0};
	sort(cost, cost + n);

	for (int i = 0; i < n; i += 1) {

		if (i < k - 1) {

			if (i == 0) {

				dp[i] = cost[i];

			} else {

				dp[i] = dp[i - 1] + cost[i];
			}

		} else if (i == k - 1) {

			dp[i] = cost[i];

		} else {
			dp[i] = dp[i - k] + cost[i];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i += 1) {
		if (dp[i] <= p) {
			ans = i + 1;
		}
	}
	return ans;
}


int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> p >> k;

		for (int i = 0; i < n; i += 1) {
			cin >> cost[i];
		}

		cout << Price() << endl;
	}
}