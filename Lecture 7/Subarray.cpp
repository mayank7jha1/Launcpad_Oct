#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = INT_MIN;

	for (int Start_Point = 0; Start_Point < n; Start_Point += 1) {

		for (int End_Point = Start_Point; End_Point < n; End_Point += 1) {

			int sum = 0;

			for (int k = Start_Point; k <= End_Point; k += 1) {
				cout << a[k] << " ";
				sum += a[k];
			}

			if (sum > ans) {
				ans = sum;
			}

			cout << endl;
			cout << "Subarray Sum of the Subarray Starting from " << Start_Point << " and Ending At " << End_Point << " is " << sum << endl;
		}
		cout << endl;
	}


	cout << "Maximum Subarray Sum is " << ans << endl;
}