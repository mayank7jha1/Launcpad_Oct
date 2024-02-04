#include<iostream>
using  namespace std;

int Solve(int* a, int x, int n) {

	if (x == n) {
		return 0;
	}

	int value = a[x] + Solve(a, x + 1, n);
	return value;
}

int Solve2(int* a, int x, int n) {

	if (x == n - 1) {
		return a[n - 1];
	}

	int value = a[x] + Solve2(a, x + 1, n);
	return value;
}

int Solve3(int* a, int x, int n) {

	if (x == n) {
		return a[n];
	}

	int value = a[x] + Solve3(a, x + 1, n);
	return value;
}

int Solve4(int* a, int n) {

	if (n == 0) {
		return 0;
	}

	int value = a[n - 1] + Solve4(a, n - 1);
	return value;
}

int Solve5(int* a, int n) {

	if (n == 1) {
		return a[0];
	}

	int value = a[n - 1] + Solve5(a, n - 1);
	return value;
}

int Solve6(int* a, int n) {

	if (n < 0 ) {
		return 0;
	}

	int value = a[n] + Solve6(a, n - 1);
	return value;
}

int Solve7(int* a, int n) {

	if (n == 0) {
		return a[0];
	}

	int value = a[n] + Solve7(a, n - 1);
	return value;
}


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	int ans = Solve(a, 0, n);
	int ans1 = Solve2(a, 0, n);
	int ans2 = Solve3(a, 0, n - 1);
	int ans3 = Solve4(a, n);
	int ans4 = Solve5(a, n);

	int ans5 = Solve6(a, n - 1);
	cout << ans5 << endl;
	int ans6 = Solve7(a, n - 1);
	cout << ans6 << endl;

	cout << ans4 << endl;
	cout << ans3 << endl;
	cout << ans1 << endl;
	cout << ans << endl;
	cout << ans2 << endl;

}





