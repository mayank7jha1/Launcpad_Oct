#include<iostream>
using  namespace std;

int SumOfArray(int *p, int n) {
	p[3] = 90;
	//*(p + 3) = 90;
	int sum = 0;
	for (int i = 0; i < n; i += 1) {
		// sum += p[i];
		sum += *(p + i);
	}

	return sum;
}

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}
	a[3] = 60;
	int ans = SumOfArray(a, n);
	cout << ans << endl;

	for (int i = 0; i < n; i += 1) {
		cout << a[i] << " ";
	}
}


