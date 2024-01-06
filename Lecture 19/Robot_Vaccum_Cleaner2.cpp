#include<iostream>
#include<algorithm>
using  namespace std;
#define int long long

int Noise(string &s) {
	//Count of s till the current h.
	int sum_s = 0;

	//Total Noise Produced till now.
	int ans = 0;

	for (int i = 0; i < s.length(); i += 1) {
		if (s[i] == 's') {
			sum_s += 1;
		} else {
			ans += sum_s;
		}
	}
	return ans;
}

bool compare(string &x, string &y) {
	string first = x + y;
	string second = y + x;

	if (Noise(first) > Noise(second)) {
		return true;
	} else {
		return false;
	}
}

int32_t main() {
	int n;
	cin >> n;
	//char s[n][100001];
	string s[n];
	string final_string = "";
	for (int i = 0; i < n; i += 1) {
		cin >> s[i];
	}

	//We have to sort the array
	//based on noise.

	sort(s, s + n, compare);

	for (int i = 0; i < n; i += 1) {
		final_string += s[i];
		//cout << s[i] << endl;
	}
	cout << Noise(final_string) << endl;
	//cout << final_string << endl;

}








