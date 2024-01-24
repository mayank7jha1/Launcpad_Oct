#include <bits/stdc++.h>
using namespace std;

int getTotalNumberOfSequences(int m, int n) {
	int T[m + 1][n + 1];
	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			if (i == 0 || j == 0) {
				T[i][j] = 0;
			}

			else if (i < j) {
				T[i][j] = 0;
			}

			else if (j == 1) {
				T[i][j] = i;
			}

			else {
				T[i][j] = T[i - 1][j] + T[i / 2][j - 1];
			}
		}
	}
	return T[m][n];
}

int main() {
	int n = 6;
	//int count = 0;
	cout << getTotalNumberOfSequences(10, 4) << endl;;
	for (int i = 1; i <= n +; i++) {
		count += getTotalNumberOfSequences(i, n);
	}
	cout << count << endl;
	return 0;
}
