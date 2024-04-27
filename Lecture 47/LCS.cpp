#include<iostream>
#include<cstring>
using  namespace std;
string s, t;
int dp[3001][3001];

int lengthLCS(int i, int j) {

	if (i >= s.length() or j >= t.length()) {
		return 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	if (s[i] == t[j]) {
		int ans = 1 + lengthLCS(i + 1, j + 1);
		return dp[i][j] = ans;
	} else {

		int Op1 = lengthLCS(i + 1, j);
		int Op2 = lengthLCS(i, j + 1);

		int ans = max(Op1, Op2);
		return dp[i][j] = ans;

	}
}

int main() {
	memset(dp, -1, sizeof(dp));
	cin >> s >> t;


	cout << lengthLCS(0, 0) << endl;
}