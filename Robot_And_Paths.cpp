#include<iostream>
using  namespace std;
char grid[1001][1001];
#define mod 1000000007
#define int long long
int m, n, p;

/*
	dp[i][j]: No of ways to reach i,j from 1,1.

*/

int Solve() {
	int dp[n + 1][m + 1] = {0};

	if (grid[1][1] == -1 or grid[n][m] == -1) {
		return 0;
	}

	dp[1][1] = 1;

	for (int i = 1; i <= n; i += 1) {
		for (int j = 1; j <= m; j += 1) {

			if (i == 1 and j == 1) {
				continue;
			}
			if (grid[i][j] == -1) {
				dp[i][j] = 0;
			} else {

				if (i == 1) {
					dp[i][j] = dp[i][j - 1] % mod;

				} else if (j == 1) {

					dp[i][j] = dp[i - 1][j] % mod;

				} else {

					dp[i][j] = ((dp[i - 1][j]) % mod +
					            (dp[i][j - 1] % mod) % mod);

				}
			}
		}
	}
	return dp[n][m];
}



int32_t main() {
	cin >> n >> m >> p;

	while (p--) {
		int x, y;
		cin >> x >> y;
		grid[x][y] = -1;
	}

	cout << Solve() << endl;
}