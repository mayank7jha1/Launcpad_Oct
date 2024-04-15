#include<iostream>
using  namespace std;
int n, h, l, r;
int a[20001];
int dp[2001][2001];

// O(2001*2001)*O(1)

int Sleeping_Schedule(int index, int Waking_Hour) {

	if (index == n) {
		return 0;
	}

	if (dp[index][Waking_Hour] != -1) {
		return dp[index][Waking_Hour];
	}
	int Option1_Waking = (Waking_Hour + a[index]) % h;
	int Option2_Waking = (Waking_Hour + a[index] - 1) % h;


	int ans1 = 0, ans2 = 0;

	if (Option1_Waking >= l and Option1_Waking <= r) {
		ans1 = 1;
	}
	if (Option2_Waking >= l and Option2_Waking <= r) {
		ans2 = 1;
	}

	int Option1 = ans1 + Sleeping_Schedule(index + 1,
	                                       Option1_Waking);
	int Option2 = ans2 + Sleeping_Schedule(index + 1,
	                                       Option2_Waking);

	return dp[index][Waking_Hour] = max(Option1, Option2);

}






int main() {
	cin >> n >> h >> l >> r;
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	memset(dp, -1, sizeof(dp));

	cout << Sleeping_Schedule(0, 0) << endl;
}




