#include<iostream>
#include<vector>
#include<climits>
using  namespace std;


/*
	Solve(1,height): Min cost from 1st Stair to
	the last stair.

*/
int Solve(int index, vector<int>&height) {

	if (index == height.size() - 1) {
		return 0;
	}

	int Option1 = abs(height[index] - height[index + 1]) +
	              Solve(index + 1, height);

	int Option2 = INT_MAX;
	if (index + 2 <= height.size() - 1) {
		Option2 = abs(height[index] - height[index + 2]) +
		          Solve(index + 2, height);
	}


	int ans = min(Option1, Option2);
	return ans;

}


/*
	Solve(n-1,height): Min Cost to reach 1st stair
	from n-1 th stair.

*/

int Solve2(int n, vector<int>&height) {

	if (n == 0) {
		return 0;
	}

	int Option2  = INT_MAX;
	int Option1 = abs(height[n] - height[n - 1]) +
	              Solve2(n - 1, height);


	if (n - 2 >= 0) {
		Option2 = abs(height[n] - height[n - 2]) +
		          Solve2(n - 2, height);
	}


	int ans = min(Option1, Option2);
	return ans;

}


int main() {
	int n;
	cin >> n;
	vector<int>height(n);

	for (int i = 0; i < n; i += 1) {
		cin >> height[i];
	}

	cout << Solve(0, height) << endl;

	cout << Solve2(n - 1, height) << endl;
}