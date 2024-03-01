#include<iostream>
using  namespace std;
bool solution[1001][1001] = {{0}};
bool visited[1001][1001] = {{0}};
int n, m;
char maze[1001][1001];
int count = 0;

bool RatInMaze(int x, int y) {

	if (x == n - 1 and y == m - 1) {
		solution[x][y] = 1;
		for (int i = 0; i < n; i += 1) {
			for (int j = 0; j < m; j += 1) {
				cout << solution[i][j] << " ";
			}
			cout << endl;
		}
		count += 1;
		cout << endl << endl;
		return false;
	}

	if (visited[x][y] == 1) {
		return false;
	}

	//Task:
	solution[x][y] = 1;
	visited[x][y] = 1;

	if (y + 1 <= m and visited[x][y + 1] == 0) {
		bool rightpath = RatInMaze(x, y + 1);
		if (rightpath == 1) {
			return true;
		}
	}

	//If right path has not returned true.

	if (x + 1 <= n and visited[x + 1][y] == 0) {
		bool downpath = RatInMaze(x + 1, y);
		if (downpath == 1) {
			return true;
		}
	}

	//If you don't have the downpath also.
	//That means is box me se (x,y) se koi rasta
	//nahi hain.
	//Solution array me original state retain karo
	//and solution [x][y] ko 0 banao.

	solution[x][y] = 0;//Backtracking
	return false;

}

int main() {

	cin >> n >> m;


	for (int i = 0; i < n; i += 1) {
		for (int j = 0; j < m; j += 1) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}

	// for (int i = 0; i < n; i += 1) {
	// 	for (int j = 0; j < m; j += 1) {
	// 		cout << maze[i][j] << " ";
	// 	}
	// }

	int ans = RatInMaze(0, 0);
	if (ans == 0) {
		cout << "-1" << endl;
	}
	cout << count << endl;
}














