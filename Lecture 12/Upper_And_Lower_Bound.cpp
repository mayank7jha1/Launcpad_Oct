#include<iostream>
using  namespace std;

int Lower_bound(int a[], int n, int target) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] >= target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}

int Upper_Bound(int a[], int n, int  target) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] > target) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}



int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}
	int target;
	cin >> target;

	int Value1 = Lower_bound(a, n, target);
	int Value2 = Upper_Bound(a, n, target);

	cout << Value1 << " " << Value2 << " " << Value2 - Value1 << endl;


}




