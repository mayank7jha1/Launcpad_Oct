#include<iostream>
#include<cstring>
using  namespace std;
int dp[3001][3001];



string getLCS(string &s, string &t, int len) {
	string lcs;
	int i = 0, j = 0;
	while (len > 0) {

		if (s[i] == t[j]) {
			lcs.push_back(s[i]);
			len -= 1;
			i += 1;
			j += 1;

		} else {

			if (dp[i + 1][j] > dp[i][j + 1]) {
				i += 1;
			} else {
				j += 1;
			}
		}
	}
	return lcs;
}

int lengthLCS(string &s, string &t, int i, int j) {

	if (i >= s.length() or j >= t.length()) {
		return 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	if (s[i] == t[j]) {
		int ans = 1 + lengthLCS(s, t, i + 1, j + 1);
		return dp[i][j] = ans;
	} else {

		int Op1 = lengthLCS(s, t, i + 1, j);
		int Op2 = lengthLCS(s, t, i, j + 1);

		int ans = max(Op1, Op2);
		return dp[i][j] = ans;

	}
}




string Solve(string &s, string &t) {
	memset(dp, -1, sizeof(dp));
	int len = lengthLCS(s, t, 0, 0);

	return getLCS(s, t, len);
}



int main() {
	string s, t;
	cin >> s >> t;
	cout << Solve(s, t) << endl;
}




