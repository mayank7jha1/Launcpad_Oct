#include<iostream>
#include<vector>
#include<climits>
using  namespace std;

int Solve(int n, vector<int>&height, int k) {

	if (n == 0) {
		return 0;
	}

	int ans = INT_MAX;

	for (int i = 1; i <= k; i += 1) {

		int Option = INT_MAX;

		if (n - i >= 0) {

			Option = abs(height[n] - height[n - i]) +
			         Solve(n - i, height, k);
		}

		ans = min(ans, Option);
	}

	return ans;
}

int Solve2(int Index, vector<int>&height, int k) {

	if (Index == height.size() - 1) {
		return 0;
	}

	int ans = INT_MAX;

	for (int jump = 1; jump <= k; jump += 1) {

		int Option = INT_MAX;

		if (Index + jump <= height.size() - 1) {

			Option = abs(height[Index] - height[Index + jump]) +
			         Solve2(Index + jump, height, k);
		}

		ans = min(ans, Option);
	}

	return ans;
}




int main() {
	int n, k;
	cin >> n >> k;
	vector<int>height(n);
	for (int i = 0; i < n; i += 1) {
		cin >> height[i];
	}
	cout << Solve(n - 1, height, k) << endl;;

	cout << Solve2(0, height, k) << endl;
}