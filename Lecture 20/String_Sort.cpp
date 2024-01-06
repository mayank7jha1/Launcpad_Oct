#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;

bool compare(string &x, string &y) {
	if (x.find(y) == 0 or y.find(x) == 0) {
		if (x.length() > y.length()) {
			return true;
		} else {
			return false;
		}
	}
	if (x < y) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;

	string a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	sort(a, a + n, compare);

	for (int i = 0; i < n; i += 1) {
		cout << a[i] << endl;
	}

}