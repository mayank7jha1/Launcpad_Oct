#include<iostream>
#include<climits>
using  namespace std;
int target;
int ans = INT_MAX;//This is the variable
//that stores my min steps to reach target.

//int count= no of steps you have taken
//while travelling in the current path.

void Solve_Basic(int x, int y, int count) {

	if (x > target or y > target) {
		return;
	}

	if (x == target or y == target) {
		if (count < ans) {
			ans = count;
		}
		return;
	}

	Solve_Basic(x + y, y, count + 1);
	Solve_Basic(x, x + y, count + 1);

	return;
}





int main() {
	cin >> target;
	Solve_Basic(1, 1, 0);
	cout << ans << endl;
}