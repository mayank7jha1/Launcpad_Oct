#include<iostream>
#include<cstring>
using  namespace std;

int dp[100001];
int dp2[100001];

int Fib(int n) {

	if (n == 0 or n == 1) {
		return n;
	}

	//Calculate karne se Pehle check.
	if (dp[n] != -1) {
		return dp[n];
	}

	int Op1 = Fib(n - 1);
	int Op2 = Fib(n - 2);

	int ans = Op1 + Op2;


	//Return karne se pehle store.
	return dp[n] = ans;

	// dp[n] = ans;
	// //return dp[n];

	//dp[n]=ans;
	// return ans;

}


int Fib2(int n) {

	// dp[i] : ith Fibonacci Number.

	dp2[0] = 0;
	dp2[1] = 1;

	for (int i = 2; i <= n; i += 1) {

		dp2[i] = dp2[i - 1] + dp2[i - 2];
	}

	return dp2[n];

}


int main() {
	int n;
	cin >> n;

	// for (int i = 0; i < 100001; i += 1) {
	// 	dp[i] = -1;
	// }

	memset(dp, -1, sizeof(dp));



	cout << endl;
	cout << Fib(n) << endl;
	// for (int i = 0; i <= n; i += 1) {
	// 	cout << dp[i] << " ";
	// }

	cout << Fib2(n) << endl;


}





















