#include<iostream>
using  namespace std;



bool Linear_Search(int a[], int n, int target) {
	for (int i = 0; i < n; i += 1) {
		if (a[i] == target) {
			return true;
		}
	}
	return false;
}


bool Binary_Search(int *a, int n, int target) {

	//Define your Search Space:
	int s = 0;
	int e = n - 1;

	//Jab tak Search Space Valid hain:
	while (s <= e) {

		int mid = (s + e) / 2;
		if (a[mid] == target) {
			return true;
		} else if (a[mid] > target) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return false;
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

	// cout << a << endl;
	cout << Linear_Search(a, n, target) << endl;
	cout << Binary_Search(a, n, target) << endl;


}




