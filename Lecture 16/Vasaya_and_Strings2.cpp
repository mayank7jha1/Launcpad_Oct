#include<iostream>
using  namespace std;
int k, n;
char s[100005];


int Solve(char ch) {

	int i = 0;
	int count = 0;

	int ans = 0;

	for (int j = 0; j < n; j += 1) {

		if (s[j] != ch) {
			count += 1;
		}

		while (count > k and i <= j) {

			if (s[i] != ch) {
				count -= 1;
			}

			i += 1;
		}

		if (j - i + 1 > ans) {
			ans = j - i + 1;
		}
	}
	return ans;
}


int main() {
	cin >> n >> k;
	cin >> s;

	//First Step: Converting b->a;
	int ans1 = Solve('a');

	int ans2 = Solve('b');

	if (ans1 > ans2) {
		cout << ans1 << endl;
	} else {
		cout << ans2 << endl;
	}

}