#include<iostream>
#include<string>
#include<algorithm>
using  namespace std;

int main() {
	string s;
	cin >> s;

	int m;
	cin >> m;

	while (m > 0) {
		int x;
		cin >> x;

		//cout << x - 1 << " " << s.length() - x << endl;
		reverse(s.begin() + (x - 1),
		        s.begin() + (s.length() - x + 1));
		//cout << s << endl;
		m -= 1;
	}

	cout << s << endl;

}