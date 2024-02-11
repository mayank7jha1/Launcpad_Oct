#include<iostream>
using  namespace std;

/*

	1. Total Ways to Reach the n-1,m-1 index.
	2. Min/Max Cost to Reach the n-1,m-1 Index if
	we have been given the cost grid.

*/
int n, m;
int Solve(int x, int y) {

	if (x == n - 1 and y == m - 1) {
		return 1;
	}

	if (x > n - 1 or y > m - 1) {
		return 0;
	}

	int Option1 = Solve(x + 1, y);
	int Option2 = Solve(x, y + 1);

	int Total_Ways = Option1 + Option2;
	return Total_Ways;
}


int Solve2(int x, int y) {

	if (x == 0 and y == 0) {
		return 1;
	}

	if (x < 0 or y < 0) {
		return 0;
	}

	int Option1 = Solve2(x - 1, y);
	int Option2 = Solve2(x, y - 1);

	int Total_Ways = Option1 + Option2;
	return Total_Ways;
}


int main() {
	cin >> n >> m;
	cout << Solve(0, 0) << endl;
	cout << Solve2(n - 1, m - 1);
}













