#include<iostream>
#include<vector>
#include<climits>
using  namespace std;
int n, k;
vector<int>taste, calorie;

int Solve(int index, int sum) {

	if (index == n) {
		if (sum == 0) {
			return 0;
		} else {
			//I don't want this path to be my answer.
			return INT_MIN;
		}
	}


	//Choosing the current fruit
	int Option1 =
	    taste[index] + Solve(index + 1, sum +
	                         (taste[index] - k * calorie[index]));

	int Option2 = 0 + Solve(index + 1, sum);

	int ans = max(Option1, Option2);
	return ans;
}



int main() {
	cin >> n >> k;
	calorie.resize(n);
	taste.resize(n);

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


