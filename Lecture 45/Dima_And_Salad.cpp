#include<iostream>
#include<vector>
#include<climits>
using  namespace std;
int n, k;
const int N = 1e5 + 1;
vector<int>taste, calorie;

// taste[i]-k*calorie[i];

// (1-10*100)*100=-10^5

int dp[101][2 * N];

//O(101*2*10^5)*O(1)=O(10^7)


int Solve(int index, int sum) {

	if (index == n) {
		if (sum == 0) {
			return 0;
		} else {
			//I don't want this path to be my answer.
			return INT_MIN;
		}
	}

	//We are using shifting as sum can be -ve also.
	if (dp[index][sum + N] != -1) {

		return dp[index][sum + N];
	}

	//Choosing the current fruit
	int Option1 =
	    taste[index] + Solve(index + 1, sum +
	                         (taste[index] - k * calorie[index]));

	int Option2 = 0 + Solve(index + 1, sum);

	int ans = max(Option1, Option2);

	return dp[index][sum] = ans;
}



int main() {
	cin >> n >> k;
	calorie.resize(n);
	taste.resize(n);

	memset(dp, -1, sizeof(dp));

	// for ( x : dp) {
	// 	for (auto y : x) {
	// 		y = -1;
	// 	}
	// }


	for (int i = 0; i < n; i += 1) {
		cin >> taste[i];
	}
	for (int i = 0; i < n; i += 1) {
		cin >> calorie[i];
	}

	int ans = Solve(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}


