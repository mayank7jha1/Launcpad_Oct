#include<iostream>
#include<algorithm>
using  namespace std;
const int N = 1e5;
int a[N], b[N], c[N];

/*
	dp[i][0]: Maximum happiness if you have done activity
	1 on ith day.

	dp[i][1]: Maximum happiness if you have done activity
	2 on ith day.

	dp[i][2]: Maximum happiness if you have done activity
	3 on ith day.

	Maximum Happiness on ith day: Maximum of above 3.

*/

int Vacation(int n) {

	int dp[n + 1][3];

	dp[1][0] = a[1];
	dp[1][1] = b[1];
	dp[1][2] = c[1];

	for (int i = 2; i <= n; i += 1) {

		dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
		dp[i][2] = max(dp[i - 1][1], dp[i - 1][0]) + c[i];
	}

	return max({dp[n][0], dp[n][1], dp[n][2]});
}



int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		cin >> a[i] >> b[i] >> c[i];
	}

	cout << Vacation(n) << endl;
}