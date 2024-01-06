#include<iostream>
#include<algorithm>
using  namespace std;

int main() {
	int n;
	cin >> n;
	//char s[n][100001];
	string s[n];
	for (int i = 0; i < n; i += 1) {
		cin >> s[i];
	}

	//We have to sort the array
	//based on noise.

	sort(s, s + n);

	for (int i = 0; i < n; i += 1) {
		cout << s[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i += 1) {
		sort(s[i].begin(), s[i].end());
	}

	for (int i = 0; i < n; i += 1) {
		cout << s[i] << endl;
	}
}








