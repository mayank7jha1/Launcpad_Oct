#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int count = 1;
	int ans = 0;

	while (count <= n) {
		int a, b, c;
		cin >> a >> b >> c;

		int sum = a + b + c;

		if (sum >= 2) {
			ans = ans + 1;
		}

		count = count + 1;
	}

	cout << ans << endl;
}



