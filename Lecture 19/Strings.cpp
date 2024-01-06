#include<iostream>
#include<algorithm>
#include<string>
using  namespace std;

bool compare(char x, char y) {
	if (x > y) {
		return true;
	} else {
		return false;
	}
}


int main() {
	string s;
	cin >> s;
	cout << s << endl;

	s = s + 'p';
	s.push_back('p');
	cout << s << endl;
	cout << s.front() << endl;
	cout << s[0] << endl;

	cout << s[s.length() - 1] << endl;
	cout << s.back() << endl;
	cout << s << endl;

	int n = s.length();
	sort(s.begin(), s.end(), compare);

	cout << s << endl;

	s.pop_back();
	cout << s << endl;
}








