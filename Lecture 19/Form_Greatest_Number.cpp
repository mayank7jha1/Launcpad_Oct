//Wrong Approach.

#include<iostream>
#include<algorithm>
using  namespace std;

// bool compare(string &x, string &y) {
// 	if (x > y) {
// 		return true;
// 	} else {
// 		return false;
// 	}
// }

bool compare(string &x, string &y) {
	string first = x + y;
	string second = y + x;
	if (first > second) {
		return true;
	} else {
		return false;
	}
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a[n];
		for (int i = 0; i < n; i += 1) {
			cin >> a[i];
		}

		sort(a, a + n, compare);
		for (int i = 0; i < n; i += 1) {
			cout << a[i];
		}
		cout << endl;
	}

}



