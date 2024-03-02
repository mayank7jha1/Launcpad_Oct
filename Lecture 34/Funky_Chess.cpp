#include<iostream>
using  namespace std;
int n;
int grid[10][10] = {{0}};
int Total_Ones = 0;
int ans = 0;//Max Number of boxes where
//the knight was able to travel across all paths.

int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};

void input_grid() {
	for (int i = 0; i < n; i += 1) {
		for (int j = 0; j < n; j += 1) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				Total_Ones++;
			}
		}
	}
}

//count= No. of boxes where the knight
//was able to travel in the currrent
//path.
void knight(int x, int y, int count) {

	ans = max(ans, count);

	for (int i = 0; i < 8; i += 1) {
		int new_x = x + dx[i];
		int new_y = y + dy[i];

		if (new_x >= 0 and new_x<10 and new_y >= 0 and new_y < 10
		        and grid[new_x][new_y] == 1) {

			grid[new_x][new_y] = 0;
			knight(new_x, new_y, count + 1);
			//Backtracking
			grid[new_x][new_y] = 1;
		}
	}

}

int main() {
	cin >> n;
	input_grid();

	if (grid[0][0] == 0) {
		cout << Total_Ones << endl;
		return 0;
	}

	grid[0][0] = 0;
	int count = 1;//Boxes where the
	//knight have travelled in a single path

	knight(0, 0, count);
	//cout << ans << endl;
	cout << Total_Ones - ans << endl;
}



