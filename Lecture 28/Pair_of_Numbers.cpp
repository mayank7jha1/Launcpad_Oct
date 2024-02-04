#include<iostream>
#include<climits>
using  namespace std;
int target;

int Solve_Basic(int x, int y) {

	if (x > target or y > target) {
		return 1e7;
	}

	if (x == target or y == target) {
		return 0;
	}


	int Op1 = Solve_Basic(x + y, y);
	int Op2 = Solve_Basic(x, x + y);

	int value = 1 + min(Op1, Op2);

	//cout << value << endl;
	return value;
}





int main() {
	cin >> target;
	int ans = Solve_Basic(1, 1);
	cout << ans << endl;
}