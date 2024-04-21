#include<iostream>
#include<cstring>
using  namespace std;

/*
	dp[i]: No of ways to eat i flowers.
	pre[i]: No of ways to eat 0 to i flowers.

*/
#define int long long
const int N = 1e5;
#define mod 1000000007
int pre[N];
int dp[N];

//Top Down  Method:

// int Flowers(int len, int k) {

// 	if (len == 0) {
// 		return 1;
// 	}

// 	if (dp[len] != -1) {
// 		return dp[len];
// 	}

// 	int Op1 = Flowers(len - 1, k);
// 	int Op2 = 0;
// 	if (len >= k) {
// 		Op2 = Flowers(len - k, k);
// 	}

// 	int ans = (Op1 % mod + Op2 % mod) % mod;
// 	return dp[len] = ans;

// }

void Precompute(int k) {
	//memset(dp, -1, sizeof(dp));

	pre[0] = 0;

	//Bottom Up
	dp[0] = 1;

	for (int i = 1; i < N; i += 1) {

		if (i >= k) {

			dp[i] = (dp[i - 1]) % mod + (dp[i - k]) % mod;
			dp[i] %= mod;

		} else {
			dp[i] = (dp[i - 1] + 0) % mod;
		}

		pre[i] = ((pre[i - 1]) % mod + (dp[i]) % mod) % mod;

	}


	// for (int i = 1; i < N; i += 1) {
	// 	int value = Flowers(i, k);//Dp[i]: Calculating dp[i]

	// 	//dp[i]=dp[i-1]+dp[i-k];

	// 	pre[i] = ((pre[i - 1]) % mod + (dp[i]) % mod) % mod;

	// }


}





int32_t main() {
	int t, k;
	cin >> t >> k;

	Precompute(k);

	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << ((pre[b]) % mod - (pre[a - 1]) % mod + mod) % mod << endl;
	}
}