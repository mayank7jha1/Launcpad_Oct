#include<iostream>
#include<climits>
using  namespace std;
int target;

int ans = INT_MAX;//This is the variable
//that stores my min steps to reach target.

//int count= no of steps you have taken
//while travelling in the current path.

void Function(int x, int y, int count) {

	if (x == 1 and y == 1) {
		if (count < ans) {
			ans = count;
		}
		return;
	}

	if (x - y > 0) {
		Function(x - y, y, count + 1);
	}
	if (y - x > 0) {
		Function(x, y - x, count + 1);
	}
}

void Pair(int target) {

	if (target == 1) {
		ans = 0;
		return;
	}

	for (int i = 1; i < (target); i += 1) {
		//pair(i,target-i)

		//Pair(i,target-i) se 1,1 me min steps.
		Function(i, target - i, 1);
	}

	return;
}


int main() {
	cin >> target;
	Pair(target);
	cout << ans << endl;
}