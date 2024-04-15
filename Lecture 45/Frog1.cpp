#include<iostream>
using  namespace std;
#include<climits>
#include<vector>

//Dp: O(State)*O(Transition Time);

int Solve(int i, vector<int>&dp, vector<int>&v) {

	if (i == v.size() - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}


	int Op1 = INT_MAX;
	int Op2 = INT_MAX;

	Op1 = abs(v[i] - v[i + 1]) + Solve(i + 1, dp, v);

	if (i + 2 <= v.size() - 1) {
		Op2 = abs(v[i] - v[i + 2]) + Solve(i + 2, dp, v);
	}

	return dp[i] = min(Op1, Op2);

}



int main() {
	int n;
	cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n; i += 1) {
		cin >> v[i];
	}

	vector<int>dp(n + 1, -1);
	cout << Solve(0, dp, v);


}