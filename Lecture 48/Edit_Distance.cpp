class Solution {
public:
	int minDistance(string s, string t) {
		int dp[1001][1001];
		int n = s.length();
		int m = t.length();

		/*

			Dp[n][m]: Min operations to convert [0-n] string 1
			to [0-m] string 2.

		*/

		for (int i = 0; i <= n; i += 1) {
			for (int j = 0; j <= m; j += 1) {

				if (i == 0) {
					dp[i][j] = j;

				} else if (j == 0) {

					dp[i][j] = i;

				} else if (s[i - 1] == t[j - 1]) {

					dp[i][j] = dp[i - 1][j - 1];

				} else {

					dp[i][j] = 1 +
					           min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});

				}


			}
		}
		return dp[n][m];

	}
};