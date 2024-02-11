#include<iostream>
#include<algorithm>
#include<climits>
using  namespace std;

/*

	1. Total Ways to Reach the n-1,m-1 index.
	2. Min/Max Cost to Reach the n-1,m-1 Index if
	we have been given the cost grid.

*/
int n, m;
int cost[1001][1001] = {0};

int Solve(int x, int y) {

	if (x == n - 1 and y == m - 1) {
		return cost[x][y];
	}

	if (x > n - 1 or y > m - 1) {
		return INT_MAX;
	}

	int Option1 =  Solve(x + 1, y);
	int Option2 =  Solve(x, y + 1);

	//cout << Option1 << " " << Option2 << endl;

	int MinCost =  cost[x][y] + min(Option1, Option2);

	return MinCost;
}



int main() {
	cin >> n >> m;
	//cout << n << " " << m << endl;

	for (int i = 0; i < n; i += 1) {
		for (int j = 0; j < m; j += 1) {
			cin >> cost[i][j];
		}
	}


	// for (int i = 0; i < n; i += 1) {
	// 	for (int j = 0; j < m; j += 1) {
	// 		cout << cost[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	cout << Solve(0, 0) << endl;
}













